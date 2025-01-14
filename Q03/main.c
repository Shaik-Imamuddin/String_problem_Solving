#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100];
    scanf("%[^\n]",str);
    int start=0,end=strlen(str)-1;

    while(start<end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("%s",str);
    //  printf("%s", strrev(str));
}