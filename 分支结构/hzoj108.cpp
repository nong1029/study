#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;
    string stuff;
    for(int i=0;i<3;i++)
        scanf("%s",stuff[i]);
    scanf("%lf %lf", &a, &b);
    if(stuff == "rab"){
        printf("%.2lf",a*b);
    }   
    else{
        printf("%.2lf",a*b/2);
    }
    return 0;
}