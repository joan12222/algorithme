#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int xone,yone,xtwo,ytwo;
		cin>>xone>>yone>>xtwo>>ytwo;
		for(int x=xone;x<=xtwo;x++){
			for(int y=yone;y<=ytwo;y++) a[x][y]++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
