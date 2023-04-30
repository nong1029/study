#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;

void quick_sort(vector<int>& arr, int l, int r){
    if(l >= r) return;
    int x = l, y = r, pivot = arr[l];
    while(x <= y){
        while(arr[y]>pivot) y--;
        // if(x<y) arr[x++] = arr[y];
        while(arr[x]<pivot ) x++;
        if(x<=y){
            swap(arr[x],arr[y]);
            x++, y--;
        } 
    }
    quick_sort(arr, l, x);
    quick_sort(arr, x+1, r);
}
vector<int> quick_sort(vector<int>& nums,int left,int right){
    if(right<=left) return nums;
    int x=left, y=right, pivot = nums[left];
    while(x<y){
        while(nums[y]>=pivot && x<y) y--;
        while(nums[x]<=pivot && x<y) x++;
        if(x<y) swap(nums[x],nums[y]);
    }
    nums[x]=pivot;
    quick_sort(nums,left,x-1);
    quick_sort(nums,x+1,right);
    return nums;
}

int main() {
    srand(time(NULL));
    vector<int> arr;
    for (int i = 0; i < 20; i++) {
        arr.push_back(rand());
    }
    int* temp = new int[arr.size()];
    memcpy(temp, arr.data(), arr.size() * sizeof(int));
    sort(temp, temp + arr.size());//区间的两个端点
    for (int i = 0; i < arr.size(); i++) 
        cout << temp[i] << " ";
    cout <<endl;
    quick_sort(arr, 0, arr.size()-1);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
