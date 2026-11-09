#include<stdio.h>

int main(){

    char str[500];
    scanf("%[^\n]",str);

    int freq[256]={0};
    int i=0;

    for(i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;
    }

    int visited[256] ={0};
    for(i=0;str[i]!='\0';i++){
        if(visited[(int)str[i]]==0){
            printf("%c - %d\n",str[i],freq[(int)str[i]]);
            visited[(int)str[i]]=1;
        }
    }
    return 0;
}