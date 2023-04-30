#include<iostream>
#include<algorithm>
using namespace std;
struct Student
{
    string name;
    int score[4],sum;
};

bool cmp(Student a, Student b){
    return a.sum > b.sum;
}

int main(){
    int n;
    cin>>n;
    Student stu[n];
    for(int i = 0;i < n;i++){
        stu[i].sum = 0;
        cin>>stu[i].name;
        for(int j = 0;j < 4;j++){
            cin>>stu[i].score[j];
            stu[i].sum += stu[i].score[j];
        }
    }
    for(int i = 0;i< n;i++){
        cout<<stu[i].sum<<endl;
    }
    sort(stu, stu + n, cmp);
    cout<<stu[0].name<<endl;
    int max = INT32_MIN,min = INT32_MAX;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 4;j++){
            max = (stu[i].score[j]>max)?stu[i].score[j]:max;
            min = (stu[i].score[j]<min)?stu[i].score[j]:min;
        }
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}