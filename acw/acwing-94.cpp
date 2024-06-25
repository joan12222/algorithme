#include<bits/stdc++.h>
using namespace std;
int n,ans[20],vis[20];
void dfs(int tot,int k){
	if(k==tot+1){
		for(int i=1;i<=tot;i++) cout<<ans[i]<<" ";
		cout<<endl;
		return;
	}
	for(int i=ans[k-1]+1;i<=n;i++){
		if(vis[i]==0){
			ans[k]=i;
			vis[i]=1;
			dfs(tot,k+1);
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++) dfs(i,1);
	return 0;
}
