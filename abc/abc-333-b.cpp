#include<bits/stdc++.h>
using namespace std;
string s1,s2;
map<string,int> mp;
int main(){
	mp["AB"]=mp["BA"]=mp["BC"]=mp["CB"]=mp["CD"]=mp["DC"]=mp["DE"]=mp["ED"]=mp["EA"]=mp["AE"]=1;
	mp["AC"]=mp["AD"]=mp["BE"]=mp["BD"]=mp["CA"]=mp["CE"]=mp["DA"]=mp["DB"]=mp["EB"]=mp["EC"]=2;
	cin>>s1>>s2;
	if(mp[s1]==mp[s2]) cout<<"Yes";
	else cout<<"No";
	return 0;
}
