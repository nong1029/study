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
    Student student[n];
    for(int i = 0;i < n;i++){
        cin>>student[i].name;
        student[i].sum = 0;
        for(int j = 0;j < 4;j++){
            cin>>student[i].score[j];
            student[i].sum += student[i].score[j];
        }
    }
    sort(student,student+n,cmp);
    for (int i = 0; i < 3; i++) {
        cout << student[i].name << endl;
    }
    return 0;
}