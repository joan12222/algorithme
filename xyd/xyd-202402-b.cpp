#include<bits/stdc++.h>
using namespace std;
int n,k,a[100005],ans;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++) ans+=min(a[1]+k,a[i]);
	cout<<ans;
	return 0;
}
