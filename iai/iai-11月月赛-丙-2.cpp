#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n,a[300005],ans=1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++) ans=ans*(a[i]-i+1)%mod;
	cout<<ans;
	return 0;
}
