#include<bits/stdc++.h>
using namespace std;
int n,k,a[10005],suf[10005],ans;
int main(){
	freopen("points.in","r",stdin);
	freopen("points.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<n;i++) suf[i]=a[i+1]-a[i];
	sort(suf+1,suf+n);
	for(int i=1;i<=k;i++) ans+=suf[i];
	cout<<ans;
	return 0;
}
