#include<bits/stdc++.h>
using namespace std;
int s,d,m,a[55][15],f[500005];
int main(){
	cin>>s>>d>>m;
	for(int i=1;i<=s;i++){
		for(int j=1;j<=d;j++){
			cin>>a[i][j];
		}
	}
	for(int i=2;i<=d;i++){
		memset(f,0,sizeof(f));
		int maxx=-1;
		for(int j=1;j<=s;j++){
			for(int k=a[j][i-1];k<=m;k++){
				f[k]=max(f[k],f[k-a[j][i-1]]+a[j][i]-a[j][i-1]);
				maxx=max(f[k],maxx);
			}
		}
		m+=maxx;
	}
	cout<<m;
	return 0;
}
