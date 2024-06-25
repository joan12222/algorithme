#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
	cin>>a>>b;
	if(a==0){
		if(b==7||b==8||b==12||b==16||b==17||b==6||b==9||b==15||b==18||b==10||b==11||b==13||b==14) cout<<"Yes";
		else cout<<"No";
	}else if(a==1||a==4) {
		if(b==4||b==5||b==6||b==7||b==8||b==10||b==11||b==12) cout<<"Yes";
		else cout<<"No";
	}else if(a==2||a==5||a==8) {
		if(b==2||b==3||b==5||b==6) cout<<"Yes";
		else cout<<"No";
	}else if(a==3||a==6||a==9||a==12) {
		if(b==0) cout<<"Yes";
		else cout<<"No";
	}else cout<<"No";
	return 0;
}
