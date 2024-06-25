#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[500005]; 
ll f[500005],g[500005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==1){
		cout<<a[1];
		return 0;
	}
	f[1]=a[1];
	for(int i=2;i<n;i++) f[i]=max(f[i-2]+a[i],f[i-1]);
	g[2]=a[2];
	for(int i=3;i<=n-2;i++) g[i]=max(g[i-2]+a[i],g[i-1]);
	cout<<max(f[n-1],g[n-2]+a[n]);
	return 0;
}
