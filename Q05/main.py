str=input()
isPalindrome = True
str = str.lower()

start,end = 0,len(str)-1

while start<end:
    if str[start]!=str[end]:
        isPalindrome = False
        break
    start+=1
    end-=1

if isPalindrome:
    print("Palindrome")
else:
    print("Not Palindrome")