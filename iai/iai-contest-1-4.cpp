#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,now[25];
ll ans;
vector<int> edges[25];
void dfs(int k){
	if(k==n+1){
		ans++;
		return;
	}
	bool vis[4]={0};
	for(int i=0;i<edges[k].size();i++) vis[now[edges[k][i]]]=1;
	int num=0;
	for(int i=1;i<=3;i++){
		if(vis[i]==0){
			now[k]=i;
			dfs(k+1);
			now[k]=0;
		}
	}
}
int main(){
	freopen("mark.in","r",stdin);
	freopen("mark.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int x;
			cin>>x;
			if(x==1){
				edges[i].push_back(j);
				edges[j].push_back(i);
			}
		}
	}
	dfs(1);
	cout<<ans;
	return 0;
}
