#include<bits/stdc++.h>
using namespace std;
int n,m;
int vis[1005]={0};
vector<int> a[1005];
bool flag=false;
void dfs(int k){
	if(k==1&&flag==false){
		cout<<"Yes";
		flag=true;
		return;
	}
	for(int i=0;i<a[k].size();i++){
		if(vis[a[k][i]]==0){
			vis[a[k][i]]=1;
			dfs(a[k][i]);
			vis[a[k][i]]=0;
		}
	}
}
int main(){
	freopen("relation.in","r",stdin);
	freopen("relation.out","w",stdout);
	cin>>m>>n;
	int x,y;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		a[x].push_back(y);
	}
	dfs(0);
	if(flag==false) cout<<"No";
	return 0;
}
