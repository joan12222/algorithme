#include<bits/stdc++.h>
using namespace std;
int n,a[1005],f[1005][1005],ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[n+i]=a[i]; 
	}
	a[0]=n;
	a[2*n+1]=a[1];
	for(int len=0;len<n;len++){
		for(int l=1;l<=2*n;l++){
			int r=l+len;
			if(r>2*n) break;
			f[l][r]=0x3f3f3f3f;
			int other;
			if(len==n-2) other=a[l-1]+1;
			else if(len==n-1) other=1;
			else other=a[l-1]+1+a[r+1];
			for(int p=l;p<=r;p++) f[l][r]=min(f[l][r],f[l][p-1]+f[p+1][r]+other);
		}
	}
	ans=0x3f3f3f3f;
	for(int i=1;i<=n;i++) ans=min(ans,f[i][n+i-1]);
	cout<<ans;
	return 0;
}
