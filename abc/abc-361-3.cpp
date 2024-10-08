#include<bits/stdc++.h>
using namespace std;
int n,k,a[200005],ans;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	ans=a[n]-a[1];
	for(int i=0;i<=k;i++) ans=min(ans,a[i+n-k]-a[i+1]);
	cout<<ans;
	return 0;
}
