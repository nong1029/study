#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    int n;
    cin>>str1>>n>>str2;
    cout<<str1.size()<<endl;
    for(int i=0;i<str1.size();i++){
        if(str1[i]=='a'){
            cout<<i+1<<endl;
            break;
        }
    }
    str1.insert(n-1,str2);
    cout<<str1<<endl;
    return 0;
}