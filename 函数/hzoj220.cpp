#include<iostream>
#include<algorithm>
using namespace std;
struct Student
{
    string name;
    int score[4],sum;
};

bool cmp(Student a,Student b){
    if(a.score[0]==b.score[0])
        return a.name < b.name;
    return (a.score[0]>b.score[0]);
}
bool cmp1(Student a,Student b){
    if(a.score[1]==b.score[1])
        return a.name < b.name;
    return (a.score[1]>b.score[1]);
}
bool cmp2(Student a,Student b){
    if(a.score[2]==b.score[2])
        return a.name < b.name;
    return (a.score[2]>b.score[2]);
}
bool cmp3(Student a,Student b){
    if(a.score[3]==b.score[3])
        return a.name < b.name;
    return (a.score[3]>b.score[3]);
}
bool cmp4(Student a,Student b){
    if(a.sum==b.sum)
        return a.name < b.name;
    return (a.sum>b.sum);
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
    sort(stu, stu + n, cmp);
    for(int i=0;i<4;i++){
        if(i!=0) cout<<" ";
        cout<<stu[i].name;
    }
    cout<<endl;
    sort(stu, stu + n, cmp1);
    for(int i=0;i<4;i++){
        if(i!=0) cout<<" ";
        cout<<stu[i].name;
    }
    cout<<endl;
    sort(stu, stu + n, cmp2);
    for(int i=0;i<4;i++){
        if(i!=0) cout<<" ";
        cout<<stu[i].name;
    }
    cout<<endl;
    sort(stu, stu + n, cmp3);
    for(int i=0;i<4;i++){
        if(i!=0) cout<<" ";
        cout<<stu[i].name;
    }
    cout<<endl;
    sort(stu, stu + n, cmp4);
    for(int i=0;i<4;i++){
        if(i!=0) cout<<" ";
        cout<<stu[i].name;
    }
    cout<<endl;
    return 0;
}