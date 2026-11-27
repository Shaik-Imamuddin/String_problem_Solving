#include<stdio.h>
int main(){

    char str[100];
    scanf("%[^\n]",str);

    int count=0,isWord=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && isWord==0){
            count++;
            isWord=1;
        }
        else if(str[i]==' ')
            isWord=0;
    }
    printf("%d",count);
    return 0;
}