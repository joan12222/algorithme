#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,v[2005];
ll f[2005][2005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>v[i];
	for(int i=1;i<=n;i++) f[i][i]=v[i]*n;
	for(int l=1;l<=n;l++){
		for(int i=1;i<n;i++){
			int j=i+l-1;
			if(j>n) break;
			f[i][j]=max(f[i+1][j]+v[i]*(n-l+1),f[i][j-1]+v[j]*(n-l+1));
		}
	}
	cout<<f[1][n];
	return 0;
}
