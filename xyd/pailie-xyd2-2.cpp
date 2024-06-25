#include<bits/stdc++.h>
using namespace std;
int n,r;
int ans[15],vis[15],pro=1;
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
		if(vis[i]==0){
			ans[k]=i;
			vis[i]=1;
			dfs(k+1); 
			vis[i]=0;
		}//数字没选过
	}
}
int main(){
	cin>>n>>r;
	for(int i=0;i<r;i++){
		pro*=n;
		n-=1;
	}
	cout<<pro;
	return 0;
}