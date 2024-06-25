#include<bits/stdc++.h>
using namespace std;
bool flag=true;
int n,k,ans[1005],vis[1005],cnt;
void dfs(int now){
	if(now==n+1&&flag){
		cnt++;
		for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
		cout<<endl;
		if(cnt==k){
			flag=false;
			exit(0);
		}
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0&&now!=i){
			vis[i]=1;
			ans[now]=i;
			dfs(now+1);
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n>>k;
	dfs(1);
	return 0;
}
