#include<bits/stdc++.h>
using namespace std;
int n,a[250],f[250][250],ans=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i][i]=a[i];
		ans=max(ans,a[i]);
	}
	for(int len=2;len<=n;len++){
		for(int l=1;l<=n-len+1;l++){
			int r=l+len-1;
			for(int p=l;p<r;p++){
				if(f[l][p]==f[p+1][r]&&f[l][p]!=0){
					f[l][r]=max(f[l][r],f[l][p]+1);
					ans=max(ans,f[l][r]);
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
