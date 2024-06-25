#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int n,m,k;
ll a[2005];
ll f[2005][2005];
int main(){
	cin>>n>>m>>k;
	for(ll i=1;i<=n;i++) cin>>a[i];
	f[0][0]=0;
	for(ll i=1;i<=m;i++) f[i][0]=-INF;
	for(ll j=1;j<=n;j++) f[0][j]=-INF;
	a[n+1]=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n+1;j++){
			ll maxx=-1;
			for(int x=max(0,j-k);x<j;x++){
				maxx=max(maxx,f[i-1][x]);
				//cout<<f[i-1][x]<<" "<<maxx<<" ";
			}
			//cout<<endl;
			if(maxx==-1) f[i][j]=0;
			else f[i][j]=a[j]+maxx;
			//cout<<"f("<<i<<","<<j<<")="<<f[i][j]<<endl;
		}
	}
	if(f[m][n+1]==0) cout<<"-1";
	else cout<<f[m][n+1];
	return 0;
} 
