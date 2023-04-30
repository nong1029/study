#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    vector<double> b;
	 b.push_back(4.0/7);
    a.push_back(4);
    a.push_back(7);
    for(int i = 2;i <= n;i++)
        a.push_back(a[i-1]+a[i-2]);
    cout<<a[n-1]<<"/"<<a[n]<<endl;
    for(int i = 2;i <= n;i++)
        b.push_back(double(a[i-1])/a[i]+b[i-2]);
    cout<<fixed<<setprecision(2)<<b[n-1]<<endl;
    return 0;
}