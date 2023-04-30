#include<iostream>
using namespace std;
int main(){
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,m,d;
    cin>>year>>m>>d;
    if((year%4==0&&year%100!=0)||(year%400==0)){
        a[1] = 29;
        if(0<d&& d<=a[m-1] && m>0 && m<=12)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else{
        if(0<d&& d<=a[m-1] && 0<m && 12>=m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
