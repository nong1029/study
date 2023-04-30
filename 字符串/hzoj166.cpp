#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    int n;
    cin>>str1>>n>>str2;
    if(str1.size()<=100) cout<<str1.size()<<endl;
    else cout<<100<<endl;
    str1.insert(n-1,str2);
    cout<<str1<<endl;
    for(int i=str1.size()-1,m=0;i>=0;i--,m++){
        if(str1[i]=='x'){
            cout<<m+1<<endl;
            break;
        }
    }
    return 0;
}