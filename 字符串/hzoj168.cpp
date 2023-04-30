#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[100];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<str[i].size();j++){
            if(j==0 && (str[i][0]>='a'&&str[i][0]<='z')) str[i][j] += 'A' - 'a';
            else if(j != 0&&(str[i][j]>='A'&&str[i][j]<='Z')) str[i][j] -= 'A' - 'a';
        }
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++)
			cout << str[i] << endl;
	return 0;
}