#include<stdio.h>

int main(){
    char str[500];
    scanf("%[^\n]",&str);
    
    int freq[256] = {0};
    int i=0;

    while(str[i]!='\0'){
        freq[(int)str[i]]++;
        i++;
    }

    for(i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c - %d\n",i,freq[i]);
        }
    }
    return 0;
}