#include<bits/stdc++.h>
using namespace std;
string s;	
int num1,num2;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='>') num1++;
		if(s[i]=='<') num2++;
	}
	if(num1==1&&num2==1&&s.size()>2) cout<<"Yes";
	else cout<<"No";
	return 0;
}
