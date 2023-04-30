#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

void merge_sort(vector<int>& arr, int l, int r){
    //[l,r)左闭右开区间
    if(l>=r-1) return;
    int mid = (l+r)/2;
    //函数递归
    merge_sort(arr,l,mid);
    merge_sort(arr,mid,r);
    int* temp = (int*)malloc(sizeof(int)*(r-l));
    int k = 0,x = l,y = mid;
    //merge操作，当左边或者右边数组还有元素时进行merge操作
    while(x<mid||y<r){
        /*(y>r)当右边数组没有元素时把左边数组插入到temp数组 或者 
        (x<mid && arr[x]<=arr[y])左边数组还有元素并且左边数组第一个元素小于右边数组第一个元素时把左边数组插入到temp数组*/
        if((x<mid && arr[x]<=arr[y])||y>=r){ 
            temp[k++] = arr[x++];
        }
        //否则将右边数组第一个元素插入到temp数组中
        else{
            temp[k++] = arr[y++];
        }
    }
    //将temp数组的值既归并排序好的值存入原数组中
    for(int i=0;i<r-l;i++){
        arr[l+i] = temp[i];
    }
    free(temp);
}

int main(){
    srand(time(NULL));
    vector<int> arr;
    for(int i=0;i<20;i++)
        arr.push_back(rand());
    merge_sort(arr,0,arr.size());
    for(int i = 0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}
