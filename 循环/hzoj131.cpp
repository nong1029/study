#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int max = INT_MIN;
    cin>>n;
    int m[n];
    for(int i=0,a;i<n;i++){
        cin>>a;
        m[i] = a;
    }
    for(int i = 0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            max = (abs(m[i]-m[j])>max)?abs(m[i]-m[j]):max;
    }
    cout<<max<<endl;
    return 0;
}