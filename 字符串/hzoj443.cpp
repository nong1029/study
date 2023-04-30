#include<iostream>
using namespace std;
int main(){
    int L[10000];
    int l,m,ans=0;
    cin>>l>>m;
    int a[m],b[m];
    for(int i=0;i<m;i++){
        cin>>a[i]>>b[i];
        for(int j=a[i];j<=b[i];j++){
            L[j] = 1;
        }
    }
    for(int i = 1;i <= l;i++){
        if(L[i] == 0) ans++;
    }
    cout<<ans;
    return 0;
}