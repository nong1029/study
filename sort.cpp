#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr;
    for(int i = 0;i<20;i++)
        arr.push_back(rand());
    vector<int>index;
    for(int i=0;i<20;i++)
        index.push_back(i);
    sort(index.begin(),index.end(),[&](int i,int j)->bool{return arr[i]<arr[j];});
    for(int i=0;i<20;i++)
        cout<<arr[i]<<' ';    
    cout<<endl;
    for(int i=0;i<20;i++)
        cout<<index[i]<<' ';
}