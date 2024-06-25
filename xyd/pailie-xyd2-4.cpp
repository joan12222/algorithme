#include<bits/stdc++.h>
using namespace std;
int n;
int ans[15],vis[15];
void dfs(int k){
	if(k==n+1){
		for(int i=1;i<=n;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
		//输出一种方案
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0&&i!=k){//没有被选过且不在自己原来的位置上
			ans[k]=i;
			vis[i]=1;
			dfs(k+1);
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n;
	dfs(1);
	return 0;
}