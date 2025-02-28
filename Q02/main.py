str=input()
str=str.lower()
vc=cc=dc=spc=0
for i in range(len(str)):
    if str[i]>='a' and str[i]<='z':
        if str[i] in "aeiou":
            vc+=1
        else:
            cc+=1
    elif str[i]>='0' and str[i]<='9':
        dc+=1
    else:
        spc+=1

print(vc,cc,dc,spc)