#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    double sum = 0;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        sum = (m+sum)*(1+0.00417);
    }
    cout<<fixed<<setprecision(2);
    cout<<"$"<<sum<<endl;
    return 0;
}