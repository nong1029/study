#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string b;
    for(int i = 0;i < s.size();i++){
        b[i] = s[s.size()-i-1];
    }
    cout<<b<<")"<<endl;
    return 0;
}