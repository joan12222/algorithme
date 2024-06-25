#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[105][105],f[105][105];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	f[1][1]=a[1][1];
	for(int j=1;j<=m;j++){
		for(int i=1;i<=min(j,n);i++){
			f[i][j]=max(f[i-1][j-1],max(f[i+1][j-1],f[i][j-1]))+a[i][j];
		}
	}
	cout<<f[n][m];
	return 0;
}
