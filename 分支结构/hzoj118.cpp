#include<iostream>
using namespace std;
int main(){
    int y,m;
    cin >> y;
    if(y>=1900)
        m = (y-1900)%12;
    else
        m = 12-((1900-y)%12);
    switch(m){
        case 0:cout<<"rat";break;
        case 1:cout<<"ox";break;
        case 2:cout<<"tiger";break;
        case 3:cout<<"rabbit";break;
        case 4:cout<<"dragon";break;
        case 5:cout<<"snake";break;
        case 6:cout<<"horse";break;
        case 7:cout<<"sheep";break;
        case 8:cout<<"monkey";break;
        case 9:cout<<"rooster";break;
        case 10:cout<<"dog";break;
        case 11:cout<<"pig";break;
        default:break;
    }
    return 0;
}