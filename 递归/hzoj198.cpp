#include<bits/stdc++.h>
using namespace std;
const int a = 1e9+7;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<2;i++)
        arr.push_back(1);
    for(int i=2;i<n;i++)
        arr.push_back(arr[i-1]+arr[i-2]);
    cout<<arr[n-1] % a<<endl;
    return 0;
}