#include<bits/stdc++.h>
using namespace std;
int n,r;
int ans[15],vis[15];
void dfs(int k){
	if(k==r+1){
		for(int i=1;i<=r;i++){
			printf("  %d",ans[i]);
		}
		printf("\n");
		//输出一种方案
		return;
	}
	for(int i=ans[k-1]+1;i<=n;i++){
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