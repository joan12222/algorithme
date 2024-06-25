#include<bits/stdc++.h>
using namespace std;
int n,cnt=1;
int ans[12],vis[12]={0};
void dfs(int k){
	for(int i=1;i<=11;i++){
		if(k==n+1){
			if(cnt==n){
				for(int j=1;j<=i;j++){
					printf("%d ",ans[j]);
				}
				printf("\n");
				return;
			}
			cnt++;
		}
		for(int j=1;j<=i;j++){
			if(vis[j]==0){
				ans[k]=j;
				vis[j]=1;
				dfs(k+1);
				vis[j]=0;
			}
		}
	}
}
int main(){
	cin>>n;
	dfs(1);
	return 0;
}