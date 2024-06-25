#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[305],f[305][305],pre[305];
int main(){
	cin>>n;
	pre[0]=0;
	memset(f,0x3f,sizeof(f));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]=pre[i-1]+a[i];
		f[i][i]=0;
	}
	for(int len=2;len<=n;len++){
		for(int l=1;l<=n-len+1;l++){
			int r=l+len-1;
			for(int p=l;p<r;p++) f[l][r]=min(f[l][r],f[l][p]+f[p+1][r]+pre[r]-pre[l-1]);
		}
	}
	cout<<f[1][n];
	return 0;
}
