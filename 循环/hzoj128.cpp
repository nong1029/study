#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,m;
    double sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        sum+=m;
    }
    cout<<fixed<<setprecision(2);
    cout<<sum/n<<endl;
    return 0;
}