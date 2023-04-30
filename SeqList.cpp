#include<iostream>
using namespace std;
struct SeqList
{
    int *data;
    int maxsize;
    int length;
};
void InitList(SeqList &L, int maxsize){
    L.length=0;
    L.data = new int[maxsize];
    L.maxsize = maxsize;
}
void IncreaseSize(SeqList &L, int len){
    int *p = L.data;
    L.data = new int[L.maxsize + len];
    for(int i=0;i<L.length;i++){
        L.data[i] = p[i];
    }
    L.maxsize += len;
    for(int i=0;i<L.length;i++)cout<<L.data[i]<<" ";
    delete[] p;
}
bool ListInsert(SeqList &L, int i, int e){
    if(i<0||i>L.length+1) return false;
    if(L.length == L.maxsize) return false;
    for(int j=L.length;j>=i;j--)
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;
    L.length++;
    return true;
} 
int GetElem(SeqList L, int i){
    return L.data[i-1];
}
int LocateElem(SeqList L, int e){
    for(int i=0;i<L.length;i++){
        if(L.data[i]==e) return i+1;
    }
    return 0;
}
bool ListDelete(SeqList &L, int i){
    if(i<1||i>L.length) return false;
    for(int j=i;j<L.length;j++)
        L.data[j-1] = L.data[j];
    L.length--;
    return true;
}
int main(){
    SeqList L;
    InitList(L, 10);
    IncreaseSize(L, 5);
    for(int i=1;i<L.maxsize;i++)
        ListInsert(L,i,i);
    ListInsert(L,5,10);
    for(int i=0;i<L.length;i++)
        cout<<L.data[i]<<" ";
    cout<<endl;
    ListDelete(L,10);
    ListDelete(L,15);
    for(int i=0;i<L.length;i++)
        cout<<L.data[i]<<" ";
    cout<<endl; 
    cout<<GetElem(L, 5)<<" "<<LocateElem(L,1)<<endl;   
    return 0;
}
