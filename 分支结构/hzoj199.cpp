#include<bits/stdc++.h>
using namespace std;

int dtf(int x,vector<int> arr){
	if(x<10) return x;
	vector<int> a;
	for(int i=0;i<10;i++)
		a.push_back(i);
	for(int i = 10;i<=x;i++){
		int b=0;
		for(int j=0;j<10;j++)
			b += arr[j]* a[i-j-1];
		a.push_back(b);
	}
	return a[x-1];
}
int main(){
	int x,y;
	vector<int> arr;
	scanf("%d%d",&x,&y);
	for(int i=0,m;i<10;i++){
		scanf("%d",&m);
		arr.push_back(m);
	}
	printf("%d",dtf(x,arr)%y);
	return 0;
}