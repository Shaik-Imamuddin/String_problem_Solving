str = input()

freq = [0]*256

for ch in str:
    freq[ord(ch)]+=1

for i in range(256):
    if freq[i]>0:
        print(chr(i),"-",freq[i])