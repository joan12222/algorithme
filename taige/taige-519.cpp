#include<bits/stdc++.h>
using namespace std;
int n,vis[6]={0};
string s[6],ans[6];
void dfs(int x){
	if(x==n+1){
		for(int i=1;i<=n;i++){
			cout<<ans[i];
		}
		cout<<" wang"<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			ans[x]=s[i];
			vis[i]=1;
			dfs(x+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("name1.in","r",stdin);
	freopen("name1.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+n+1);
	dfs(1);
	return 0;
}