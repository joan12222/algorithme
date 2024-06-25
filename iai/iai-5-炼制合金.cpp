#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3f3f3f3f
int n,a,b,x[1005],y[1005],w[1005];
ll f[305][305];
int main(){
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++) cin>>x[i]>>y[i]>>w[i];
	memset(f,inf,sizeof(f));
	f[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=a;j>=x[i];j--){
			for(int k=b;k>=y[i];k--)
				f[j][k]=min(f[j][k],f[j-x[i]][k-y[i]]+w[i]);
		}
	}
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			cout<<"f("<<i<<","<<j<<")=";
			if(f[i][j]==inf) cout<<"inf"<<endl;
			else cout<<f[i][j]<<endl;
		}
	}
	cout<<f[a][b];
	return 0;
}
