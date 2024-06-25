#include<bits/stdc++.h>
using namespace std;
string s,ans;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		ans+=s[i];
		while(ans.size()>=3&&ans.substr(ans.size()-3)=="ABC") ans.erase(ans.size()-3,ans.size());
	}
	cout<<ans;
	return 0;
}
