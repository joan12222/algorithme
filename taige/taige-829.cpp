#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
ll n,a[100005],f[100005];
int main(){
	freopen("cable.in","r",stdin);
	freopen("cable.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>a[i];
	cout<<INF<<endl;
	ll c;
	for(ll i=1;i<=n;i++){
		c=INF;
		for(ll j=i-1;j>=0;j--){
			c=min(c,f[j]+((i-j)*(i-j-1))/2);
		}
		f[i]=c+a[i];
	}
	cout<<f[n];
	return 0;
} 
