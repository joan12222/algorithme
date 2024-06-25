#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,head[205],tail[205],f[205][205];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>head[i];
		if(i!=1) tail[i-1]=head[i];
	}
	tail[n]=head[1];
	for(int i=1;i<=n;i++){
		head[i+n]=head[i];
		tail[i+n]=tail[i];
	}
	for(int len=1;len<=n;len++){
		for(int l=1;l<=2*n-len;l++){
			int r=l+len-1;
			for(int p=l;p<r;p++) f[l][r]=max(f[l][r],f[l][p]+f[p+1][r]+head[l]*head[p+1]*tail[r]);
		}
	}
	int ans=-1;
	for(int i=1;i<=n;i++) ans=max(ans,f[i][n+i-1]);
	cout<<ans;
	return 0;
}
