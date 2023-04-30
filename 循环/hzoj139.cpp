#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        for(int j=0;j<2*(i+1);j++){
            cout<<'A';
        }
        cout<<endl;
    }
    for(int i=n;i<2*n;i++){
        for(int j=0;j<i-n+1;j++){
            cout<<' ';
        }
        for(int j=0;j<(2*n-i-2)*2-1;j++){
            cout<<'A';
        }
        cout<<endl;
    }
    return 0;
}