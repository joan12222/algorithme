#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
int n,m,a[805];
int f[805][805];
int main(){
	//freopen("variety.in","r",stdin);
	//freopen("variety.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) f[i][1]=0;
	for(int i=1;i<=m;i++) f[1][i]=INF;
	f[1][1]=0;
	for(int i=1;i<=n;i++){
		for(int j=2;j<=m;j++){
			int minn=INF;
			for(int k=1;k<i;k++){
				minn=min(minn,f[k][j-1]+abs(a[i]-a[k]));
				cout<<minn<<" ";
			}
			f[i][j]=minn;
			cout<<"f("<<i<<","<<j<<")="<<f[i][j]<<endl;
		}
	}
	int ans=INF;
	for(int i=1;i<=n;i++) ans=min(ans,f[i][m]);
	cout<<ans;
	return 0;
}
