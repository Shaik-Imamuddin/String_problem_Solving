#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

    char str[100];
    scanf("%[^\n]",str);
    int vc=0,cc=0,dc=0,spc=0;
    
    for(int i=0;i<strlen(str);i++){
        str[i] = tolower(str[i]);
        if(str[i]>='a' && str[i]<='z'){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                vc++;
            else
                cc++;
        }
        else if(str[i]>='0' && str[i]<='9')
            dc++;
        else
            spc++;

    }
    printf("%d %d %d %d",vc,cc,dc,spc);
    return 0;
}