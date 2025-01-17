str = input()
arr = list(str)

start=0
end=len(str)-1

while start<end:
    arr[start],arr[end] = arr[end],arr[start]
    start+=1
    end-=1

print("".join(arr))

# print("".join(reversed(str)))

# print(str[::-1])