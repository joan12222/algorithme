#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,l,w[505],v[505],f[2005];
int main(){
	cin>>n>>l;
	for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
	for(int i=1;i<=l;i++) f[i]=2e9;
	f[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=l;j>=0;j--) f[j]=min(f[j],f[max(j-w[i],0LL)]+v[i]);
	}
	if(f[l]==2e9) cout<<"No solution";
	else cout<<f[l];
	return 0;
}
