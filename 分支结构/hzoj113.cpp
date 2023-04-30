#include<iostream>
using namespace std;
int main(){
    int y,m;
    int b[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>y>>m;
    if(((y%4==0)&&(y%100!=0))|| y%400 == 0 )
        b[1] = 29;
    cout<<b[m-1]<<endl;
    return 0; 
}