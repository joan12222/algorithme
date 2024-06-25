#include<bits/stdc++.h>
using namespace std;
int n,r,cnt=1;
int ans[21],vis[21]={0};
void dfs(int k){
	if(k==n+1){
		if(cnt==r){
			for(int i=1;i<=n;i++){
				printf("%d ",ans[i]);
			}
			printf("\n");
		}
		cnt++;
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			ans[k]=i;
			vis[i]=1;
			dfs(k+1);
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n>>r;
	dfs(1);
	return 0;
}