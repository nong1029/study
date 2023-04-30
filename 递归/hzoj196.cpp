#include<iostream>
using namespace std;
int f(int n){
	if(n == 2||n ==3 || n==4) return 1;
	return f(n-2)+f(n-3);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}