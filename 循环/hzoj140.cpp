#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        for(int j=0;j<2*i+1;j++){
            cout<<char('A'+i);
        }
        cout<<endl;
    }
    for(int i=n;i<2*n;i++){
        for(int j=0;j<i-n+1;j++){
            cout<<' ';
        }
        for(int j=0;j<2*(2*n-i-1)-1;j++){
            cout<<char('A'+2*(n-1)-i);
        }
        cout<<endl;
    }
    return 0;
}