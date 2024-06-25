#include<bits/stdc++.h>
using namespace std;
string s;
int rnum,lnum,unum,dnum;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='R') rnum++;
		if(s[i]=='L') lnum++;
		if(s[i]=='U') unum++;
		if(s[i]=='D') dnum++;
	}
	cout<<abs(rnum-lnum)+abs(unum-dnum);
	return 0;
}
