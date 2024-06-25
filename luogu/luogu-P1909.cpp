#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,num[5],mon[5];
int main(){
	cin>>n;
	for(int i=1;i<=3;i++) cin>>num[i]>>mon[i];
	ll ans=LONG_LONG_MAX;
	for(int i=1;i<=3;i++){
		ans=min(ans,1LL*(n%num[i]==0?n/num[i]:n/num[i]+1)*mon[i]);
	}
	cout<<ans;
	return 0;
}
