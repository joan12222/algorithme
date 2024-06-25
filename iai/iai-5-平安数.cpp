#include<bits/stdc++.h>
using namespace std;
#define ll long long
int c[30],dp[30][270];
string s;
int dfs(int pos,int pre,int limit){
	int ans=0;
	if(pos==1) return c[pos]=="3"&&c[pos-1]=="1";
	if(~dp[pos][pre]&&!limit) return dp[pos][pre];
	int end=limit?c[pos]:9;
	for()
}
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++) c[i]=s[i]-'0';
	cout<<dfs(s.size()-1,0,1);
	return 0;
}
