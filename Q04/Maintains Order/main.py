str = input()

freq = [0]*256

for ch in str:
    freq[ord(ch)]+=1

visited = [False]*256

for ch in str:
    if not visited[ord(ch)]:
        print(ch,"-",freq[ord(ch)])
        visited[ord(ch)]=True