#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[100005],p,s,k,sum=0,ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m>>p>>s>>k;
	for(int i=1;i<=n;i++) sum+=a[i]*(m-i);
	sum+=s*(m-p);
	ans=m+int(sum*1.0/k+0.5*(sum>0?1:-1));
	if(ans>n) ans=n;
	if(ans<1) ans=1;
	cout<<ans;
	return 0;
} 
