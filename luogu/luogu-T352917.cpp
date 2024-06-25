#include<bits/stdc++.h>
using namespace std;
bool flag;
struct Node{
	int u,v,x;
}e[1000005];
int n,m,nums,numv,S[100005],V[100005],vis[100005];
vector<int> edges[100005];
bool check(int time){
	memset(vis,0,sizeof(vis));
	memset(edges,0,sizeof(edges));
	queue<int> q;
	for(int i=1;i<=m;i++){
		if(e[i].x<=time){
			edges[e[i].u].push_back(e[i].v);
			edges[e[i].v].push_back(e[i].u);
		}
	}
	for(int i=1;i<=nums;i++){
		q.push(S[i]);
		vis[S[i]]=1;
	}
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=0;i<edges[now].size();i++){
			if(vis[edges[now][i]]==0){
				vis[edges[now][i]]=1;
				q.push(edges[now][i]);
			}
		}
	}
	for(int i=1;i<=numv;i++){
		if(vis[V[i]]==0) return false;
	}
	return true;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>e[i].u>>e[i].v>>e[i].x;
	cin>>nums;
	for(int i=1;i<=nums;i++) cin>>S[i];
	cin>>numv;
	for(int i=1;i<=numv;i++) cin>>V[i];
	int left=-1,right=1e9;
	while(left<right){
		int mid=(left+right)/2;
		if(check(mid)) right=mid;
		else left=mid+1;
	}
	cout<<right;
	return 0;
}
