#include<bits/stdc++.h>
using namespace std;
int main() {
    string str1, str2;
    cin>>str1>>str2;
    int ans = 0;
	 const int a = str2.size();
    for (int i = 0; i <=(str1.size()-str2.size()); i++){
        if (strncmp(str2,str1,a) == 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}