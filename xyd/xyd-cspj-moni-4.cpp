#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,w,l,r,f[305][305],g[305][305][305];
int main(){
	freopen("application.in","r",stdin);
	freopen("application.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>w>>l>>r;
		l--;
		r--;
		for(int j=l;j<=r;j++) g[l][j][r]=max(g[l][j][r],w);
	}
	for(int len=1;len<n;len++){
		for(int i=0,j=len;j<n;i++,j++){
			for(int k=i;k<=j;k++){
				if(i<n-1) g[i][k][j]=max(g[i][k][j],g[i+1][k][j]);
				if(j>0) g[i][k][j]=max(g[i][k][j],g[i][k][j-1]);
			}
		}
	}
	int op1,op2;
	for(int len=0;len<n;len++){
		for(int i=0,j=len;j<n;i++,j++){
			for(int k=i;k<=j;k++){
				if(k<n-1) f[i][j]=max(f[i][j],f[i][k]+f[k+1][j]);
				if(k>0) op1=f[i][k-1];
				else op1=0;
				if(k<n-1) op2=f[k+1][j];
				else op2=0;
				f[i][j]=max(f[i][j],op1+op2+g[i][k][j]);
			}
		}
	}
	cout<<f[0][n-1];
	return 0;
}
