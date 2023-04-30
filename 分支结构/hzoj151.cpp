#include <iostream>
using namespace std;

int main(){
	char a,b,c,d;
	cin>>a>>b>>c>>d;
	if((a=='Y'&&c=='H')||(a=='O'&&c=='Y')||(a=='H'&&c=='O')){
		if(((a=='Y'&&d=='O')||(a=='O'&&d=='H')||(a=='H'&&d=='Y'))&&((b=='Y'&&d=='O')||(b=='O'&&d=='H')||(b=='H'&&d=='Y')||(b=='Y'&&d=='Y')||(b=='O'&&d=='O'||(b=='H'&&d=='H')))){//括号问题！！！ 
			cout<<"LIHUA";
		}else{
			cout<<"MING";
		}
	}
	if((a=='Y'&&c=='Y')||(a=='O'&&c=='O'||(a=='H'&&c=='H'))){
		if((b=='Y'&&d=='Y')||(b=='O'&&d=='O'||(b=='H'&&d=='H'))){
			cout<<"TIE";
		}else if((b=='Y'&&d=='H')||(b=='O'&&d=='Y')||(b=='H'&&d=='O')){
			cout<<"MING";
		}else{
			cout<<"LIHUA";
		}
	}
	if((c=='Y'&&a=='H')||(c=='O'&&a=='Y')||(c=='H'&&a=='O')){
		if(((b=='Y'&&c=='H')||(d=='O'&&c=='Y')||(d=='H'&&c=='O'))&&(d=='Y'&&b=='O')||(d=='O'&&b=='H')||(d=='H'&&b=='Y')||(b=='Y'&&d=='Y')||(b=='O'&&d=='O'||(b=='H'&&d=='H'))){
			cout<<"MING";
		}else{
			cout<<"LIHUA";
		}
	}
	return 0;	
}
