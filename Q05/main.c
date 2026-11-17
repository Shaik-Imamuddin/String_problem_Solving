#include<stdio.h>
#include<string.h>

// uncomment below line to use isupper() and tolower() inbuilt functions
// #include<ctype.h>

int main(){
    char str[100];
    scanf("%[^\n]",str);

    //un-comment the below block to ignore case

    // for(int i=0;str[i]!='\0';i++){
    //     if(isupper(str[i]))
    //         str[i] = tolower(str[i]);
    // }

    int isPalindrmoe = 1;

    int start=0,end=strlen(str)-1;

    while(start<end){
        if(str[start]!=str[end]){
            ispalindrmoe = 0;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrmoe)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}