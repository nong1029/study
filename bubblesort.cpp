#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
void bubble_sort(vector<int>& arr,int l,int r){
    for(int i = r;i>l;i--){
        for(int j = l;j < i ;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}
int main(){
    vector<int> arr;
    srand(time(NULL));
    for(int i=0;i<20;i++){
        arr.push_back(rand());
    }
    bubble_sort(arr,0,arr.size()-1);
    for(int i = 0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}
