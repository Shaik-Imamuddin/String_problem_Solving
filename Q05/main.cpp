#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    int start=0,end = str.length()-1;
    bool isPalindrome = true;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i]+32;
    }   

    while(start<end){
        if(str[start]!=str[end])
            isPalindrome = false;
        start++;
        end--;
    }

    if(isPalindrome)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}