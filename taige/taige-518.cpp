#include<bits/stdc++.h>
using namespace std;
int n,vis[10]={0},ans[10];
void dfs(int x){
	if(x==n+1){
		for(int i=1;i<=n-1;i++){
			cout<<ans[i]<<" ";
		}
		cout<<ans[n]<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			ans[x]=i;
			vis[i]=1;
			dfs(x+1);
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n;
	dfs(1);
	return 0;
}