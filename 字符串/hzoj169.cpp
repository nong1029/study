#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int code=0;
    cin>>n;
    char str[n];
    int nums[n];
    string s;
    for(int i=0;i<n;i++){
        cin>>str[i];
        cin>>nums[i];
    }
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<n;j++){
            if(s[i] == str[j]) code += nums[j];
        }
    }
    cout<<code<<endl;
    
}