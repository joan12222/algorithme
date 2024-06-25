#include<bits/stdc++.h>
using namespace std;
int n,l,r,a[45],ans=0;
void dfs(int k,int sum){
	if(sum>r) return;
	int op=sum;
	for(int i=k;i<=n;i++) op+=a[i];
	if(op<l) return;
	if(k==n+1){
		if(sum>=l&&sum<=r) ans++;
		return;
	}
	dfs(k+1,sum+a[k]);
	dfs(k+1,sum);
}
int main(){
	cin>>n>>l>>r;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1,0);
	cout<<ans;
	return 0;
}
