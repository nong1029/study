#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(j!=n)
                cout<<i<<"*"<<j<<"="<<i*j<<"\t";
            else
                cout<<i<<"*"<<j<<"="<<i*j;
        }
        cout<<endl;
    }
    return 0;
}