#include<iostream>
using namespace std;

int main(){

    string str;
    cin>>str;

    int freq[256] = {0};
    int i=0;

    while(str[i]!='\0'){
        freq[(int)str[i]]++;
        i++;
    }

    for(i=0;i<256;i++){
        if(freq[i]>0)
            cout<<(char)i<<" - "<<freq[i]<<endl;
    }
    return 0;
}