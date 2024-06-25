#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,q,a[200005];
ll s[200005];
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++) s[i]=s[i-1]+a[i];
	while(q--){
		ll x;
		cin>>x;
		cout<<upper_bound(s+1,s+n+1,x)-s-1<<endl;
	}
	return 0;
}
