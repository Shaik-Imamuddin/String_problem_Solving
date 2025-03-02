#include<iostream>
using namespace std;

int main(){

    char str[500];
    cin>>str;

    int freq[256] = {0};

    for(int i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;
    }

    int visited[256] = {0};

    for(int i=0;str[i]!='\0';i++){
        if(visited[(int)str[i]]==0){
            cout<<str[i]<<" - "<<freq[(int)str[i]]<<endl;
            visited[(int)str[i]]=1;
        }
    }
    return 0;
}