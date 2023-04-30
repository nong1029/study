#include<bits/stdc++.h>
using namespace std;
bool iszs(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}
bool ishw(int m){
    if(m<0) return false;
    int c=0,t=m;
    while(t>0){
        c = c*10 + t%10;
        t = t/10;
    }
    return c == m;
}
int main(){
    int a,b,num =0;
    cin>>a>>b;
    for(int i =a;i<=b;i++){
        if(ishw(i)){
            if(iszs(i)){
                num++;
                if(num == 1) cout<<i;
                else cout<<" "<<i;
            } 
        }         
    }
    return 0;   
}