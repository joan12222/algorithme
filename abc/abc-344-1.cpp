#include<bits/stdc++.h>
using namespace std;
string s;
bool flag1=false,flag2=false;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='|'){
			if(flag1==false) flag1=true;
			else if(flag2==false) flag2=true;
		}else{
			if(flag1==false||flag2==true) cout<<s[i];
		}
	}
	return 0;
}
