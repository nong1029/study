#include<iostream>
#include<vector>
using namespace std;
void bubblesort(int *arr,int *bh,int len){
    for(int i=0;i<len-1;i++){
        for(int j = 0;j < len - i - 1;j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);
                swap(bh[j],bh[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int height[n], bh[n];
    for(int i = 0;i < n;i++){
        cin>>height[i];
        bh[i] = i+1;
    }
    bubblesort(height,bh,n);
    for(int i = 0;i < n;i++){
        cout<<bh[i];
        if(i!=n-1) cout<<" ";
    }
    return 0;
}
