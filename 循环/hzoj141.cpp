#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++) cout<<' ';
        for(int j=0;j<2*(n-i)+1;j++){
            if(j<n-i+1) cout<<char('A'+i+j);
            else cout<<char('A'+2*n-i-j);
        }
        cout<<endl;
    }
    for(int i =n+1;i<2*n+1;i++){
        for(int j=0;j<2*n-i;j++) cout<<" ";
        for(int j=0;j<2*(i-n)+1;j++){
            if(j<=i-n) cout<<char('A'+ 2*n-i+j);
            else cout<<char('A'+i-j);
        }
        cout<<endl;
    }
    return 0;
}