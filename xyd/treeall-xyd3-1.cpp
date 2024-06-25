#include<bits/stdc++.h>
using namespace std;
vector<int> tree[100001];
int fath[100001];
void dfs(int u,int fa){
	fath[u]=fa;
	for(int i=0;i<tree[u].size();i++){
		int v=tree[u][i];
		if(v!=fa){
			dfs(v,u);
		}
	}
}
int main(){
	int n,x,y;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		scanf("%d%d",&x,&y);
		tree[x].push_back(y);
		tree[y].push_back(x);
	}
	dfs(1,0);
	for(int i=2;i<=n;i++){
		printf("%d\n",fath[i]);
	}
	return 0;
}