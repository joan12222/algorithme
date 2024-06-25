#include<bits/stdc++.h>
using namespace std;
string s;
int vis[5];
int main(){
	cin>>s;
	if(s.size()<8||s.size()>16){
		cout<<"Invalid password";
		return 0;
	}
	for(int i=0;i<s.size();i++){
		if('A'<=s[i]&&s[i]<='Z') vis[1]=1;
		else if('a'<=s[i]&&s[i]<='z') vis[2]=1;
		else if('0'<=s[i]&&s[i]<='9') vis[3]=1;
		else if(33<=s[i]&&s[i]<=35||37<=s[i]&&s[i]<=47||58<=s[i]&&s[i]<=63||91<=s[i]&&s[i]<=95||123<=s[i]&&s[i]<=126) vis[4]=1;
	}
	int ans=0;
	for(int i=1;i<=4;i++){
		if(vis[i]==1) ans++;
	}
	if(ans>=3) cout<<"Strong password";
	else cout<<"Weak password";
	return 0;
}
