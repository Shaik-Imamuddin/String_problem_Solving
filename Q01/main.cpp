#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    int vc=0,cc=0;

    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);

        if(str[i]>='a' && str[i]<='z'){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                vc++;
            else
                cc++;
        }
    }
    cout<<vc<<" "<<cc;
    return 0;
}