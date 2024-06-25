#include<bits/stdc++.h>
using namespace std;
unordered_map<string,bool> bucket;
int main(){
	string s,ans="";
	while(cin>>s&&s!="0"){
		ans+=s;
	}
	cout<<ans;
	return 0;
}
