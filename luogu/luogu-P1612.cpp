#include<bits/stdc++.h>
using namespace std;
int n,w[100005],c[100005],st[100005],s[100005],top,ans[100005];
vector<int> edges[100005];
bool cmp(int x,int y){
	return s[x]<y;
}
void dfs(int k){
	st[top++]=k;
	ans[k]=st+top-lower_bound(st,st+top,s[k]-c[k],cmp)-1;
	for(int i=0;i<edges[k].size();i++){
		s[edges[k][i]]=s[k]+w[edges[k][i]];
		dfs(edges[k][i]);
	}
	top--;
}
int main(){
	cin>>n;
	edges[0].push_back(1);
	for(int i=2,x;i<=n;i++){
		cin>>x;
		edges[x].push_back(i);
	}
	for(int i=1;i<=n;i++) cin>>w[i];
	for(int i=1;i<=n;i++) cin>>c[i];
	dfs(0);
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	return 0;
}
