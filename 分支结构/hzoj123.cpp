#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    if((a<=c && b>=d)||(a>=c && b<=d))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}