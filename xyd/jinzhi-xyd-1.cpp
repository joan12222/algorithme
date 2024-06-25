#include<bits/stdc++.h>
using namespace std;
int n,m;
int number=0;
string s,ss="";
void to10(){
	for(int i=0;i<s.size();i++){
		if(s[i]>'0'&&s[i]<'9'){
			number+=(s[i]-'0')*pow(n,s.size()-i-1);
		}else{
			number+=(s[i]-55)*pow(n,s.size()-i-1);
		}
	}
}
void tom(){
	while(number!=0){
		int x=number%m;
		number/=m;
		if(x<10){
			ss+=x+'0';
		}else{
			ss+=int(x)+55;
		}
	}
}
int main(){
	cin>>n>>s>>m;
	to10();
	tom();
	for(int i=ss.size()-1;i>=0;i--){
		cout<<ss[i];
	}
	return 0;
}