#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    int start=0,end=str.length()-1;

    while(start<end){
        char temp  = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    cout<<str;
    return 0;
}