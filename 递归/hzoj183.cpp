#include <iostream>
using namespace std;
int f(int x){
    if(x<=0){
        return 0;
    }
    else{
        if(x==1){
            return 1;
        }
        else{
            if(x%2==0){
                return 3*f(x/2)-1;
            }
            else{
                return 3*f((x+1)/2)-1;
            }
        }
    }
}
int a;
int main() {
    cin>>a;
    cout<<f(a);
    return 0;  
}