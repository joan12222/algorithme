#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
string t,s[105][105];
int n,a[105];
bool flag=false;
map<pair<int,string>,bool> mem;
map<pair<int,string>,int> cache;
int dfs(int k,string now){
	if(k==n+1){
		if(now==t) return 0;
		return inf;
	}
	if(now.size()>t.size()) return inf;
	if(mem[{k,now}]) return cache[{k,now}];
	mem[{k,now}]=true;
	int res=inf;
	res=min(res,dfs(k+1,now));
	for(int i=1;i<=a[k];i++) res=min(res,dfs(k+1,now+s[k][i])+1);
	return cache[{k,now}]=res;
}
int main(){
	cin>>t>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=a[i];j++) cin>>s[i][j];
	}
	if(dfs(1,"")>=inf) cout<<"-1";
	else cout<<dfs(1,"");
	return 0;
}
