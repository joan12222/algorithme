#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	int dir=1;
	int x=0,y=0;
	//北=0，东=1，南=2，西=3 
	for(int i=0;i<s.size();i++){
		if(s[i]=='R') dir=(dir+1)%4;
		else if(s[i]=='L') dir=(dir+3)%4;
		else if(s[i]=='F'){
			if(dir==0) x++;
			else if(dir==1) y++;
			else if(dir==2) x--;
			else y--;
		}else{
			if(dir==0) x--;
			else if(dir==1) y--;
			else if(dir==2) x++;
			else y++;
		}
	}
	cout<<x<<" "<<y;
	return 0;
}
