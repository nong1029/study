#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(('a'<=s[i] && s[i]<'z')||('A'<=s[i] && s[i]<'Z')) s[i]+=1;
        else
            if(s[i]=='z'||s[i]=='Z') s[i]=s[i]-25;     
    }
    cout<<s<<endl;
    return 0;
}