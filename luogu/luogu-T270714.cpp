#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
ll a[55][55],ans[55][55];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			ll maxx=-1;
			for(ll k=1;k<=n;k++){
				for(ll l=1;l<=m;l++){
					if(i==k&&j==l) continue;
					if(a[i][j]!=a[k][l]) continue;
					maxx=max(maxx,(i-k)*(i-k)+(j-l)*(j-l));
				}
			}
			ans[i][j]=maxx;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
