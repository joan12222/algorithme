#include<bits/stdc++.h>
using namespace std;
int n,a[505],f[505][505],pre[505]; 
int main(){
	cin>>n;
	memset(f,0x3f,sizeof(f));
	for(int i=1;i<=n;i++) cin>>a[i],f[i][i]=0;
	for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i];
	for(int len=1;len<=n;len++){
		for(int l=1;l<=n;l++){
			int r=l+len-1;
			if(r>n) break;
			for(int p=l;p<r;p++) f[l][r]=min(f[l][r],f[l][p]+f[p+1][r]+pre[r]-pre[l-1]);
		}
	}
	cout<<f[1][n];
	return 0;
}
