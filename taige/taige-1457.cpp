#include<bits/stdc++.h>
using namespace std;
int n,m,a[30],ans=INT_MAX,vis[30]={0};
void dfs(int k,int group,int sum){
	if(group>=ans){
		return;
	}
	if(k==n+1){
		ans=min(ans,group);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			if(sum+a[i]<=m){
				dfs(k+1,group,sum+a[i]);
			}else{
				dfs(k+1,group+1,a[i]);
			}
			vis[i]=0;
		}
	}
}
int main(){
	freopen("chase.in","r",stdin);
	freopen("chase.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,1,0);
	cout<<ans;
	return 0;
}