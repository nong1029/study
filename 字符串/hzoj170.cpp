#include<bits/stdc++.h>
using namespace std;
int main(){	
    int n,pos;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
		cin>>str[i];
    for(int i=0;i<n;i++){
		while(str[i].find("Ban_smoking") != -1){
			pos = str[i].find("Ban_smoking");
			str[i].replace(pos,11,"No_smoking");
		}
    }
    for(int i=0;i<n;i++)
        cout<<str[i]<<endl;
    return 0;
}