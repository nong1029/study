#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    scanf("%d",&a);
    if((a%7 == 0 )&&(a%2!=0))
        printf("%s","YES");
    else
        printf("%s","NO");
    return 0;
}