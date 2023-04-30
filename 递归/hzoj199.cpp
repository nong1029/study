#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,m;
    cin>>k>>m;
    int a[10];
    vector<int> f;
    for(int i=0;i<10;i++){
        cin>>a[i];
        f.push_back(i);
    }
    if(k<10) cout<<k%m<<endl;
    else{
        for(int i=10;i<=k;i++){
            int b=0;
            for(int j=0;j<10;j++)
                b += a[j]*f[i-j-1];   
				 f.push_back(b%m);
        }
        cout<<f[k]<<endl;
    }
	return 0;
}