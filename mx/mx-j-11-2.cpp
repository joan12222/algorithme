#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[200005],f[200005],d[200005],q[200005],v[200005];
ll ans[200005];
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>f[i],d[f[i]]++;
	int l=0,r=0;
	for(int i=1;i<=n;i++){
		if(d[i]==0) q[r++]=i;
	}
	for(l=0;l<r;l++){
		int x=q[l];
		v[x]=1;
		d[f[x]]--;
		if(d[f[x]]==0) q[r++]=f[x];
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			int x=i,st=x,sum=a[x];
			v[x]=1;
			while(f[x]!=st){
				x=f[x];
				v[x]=1;
				sum+=a[x];
			}
			x=i;
			ans[x]=sum;
			while(f[x]!=st){
				x=f[x];
				ans[x]=sum;
			}
		}
	}
	for(int i=r-1;i>=0;i--){
		int x=q[i];
		ans[x]=ans[f[x]]+a[x];
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<endl;
	return 0;
}
