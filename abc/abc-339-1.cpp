#include<bits/stdc++.h>
using namespace std;
string s,ans="";
int main(){
	cin>>s;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]!='.') ans+=s[i];
		else break;
	}
	reverse(ans.begin(),ans.end());
	cout<<ans;
	return 0;
}
