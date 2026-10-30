str=input()
str=str.lower()
vc=cc=0
for i in range(len(str)):
    if str[i]>='a' and str[i]<='z':
        if str[i] in "aeiou":
            vc+=1
        else:
            cc+=1

print(vc,cc)