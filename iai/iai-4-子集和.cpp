#include<bits/stdc++.h>
using namespace std;
int n,t,a[25],choice[25];
bool flag=false;
void dfs(int k){
	if(k==n+1){
		int sum=0;
		for(int i=1;i<=n;i++){
			if(choice[i]==1) sum+=a[i];
		}
		if(sum==t) flag=true;
		return;
	}
	choice[k]=1;
	dfs(k+1);
	choice[k]=0;
	dfs(k+1);
}
int main(){
	cin>>n>>t;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1);
	if(flag) cout<<"Yes";
	else cout<<"No";
	return 0;
}
