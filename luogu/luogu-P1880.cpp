#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[205],minn[205][205],maxx[205][205],pre[205];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[n+i]=a[i];
	}
	memset(minn,0x3f,sizeof(minn));
	memset(maxx,-1,sizeof(maxx));
	pre[0]=0;
	for(int i=1;i<2*n;i++){
		pre[i]=pre[i-1]+a[i];
		maxx[i][i]=minn[i][i]=0;
	}
	for(int len=2;len<=n;len++){
		for(int l=1;l<=2*n-len+1;l++){
			int r=l+len-1;
			for(int p=l;p<r;p++){
				maxx[l][r]=max(maxx[l][r],maxx[l][p]+maxx[p+1][r]+pre[r]-pre[l-1]);
				minn[l][r]=min(minn[l][r],minn[l][p]+minn[p+1][r]+pre[r]-pre[l-1]);
			}
		}
	}
	int maxans=-1,minans=0x3f3f3f3f;
	for(int i=1;i<=n;i++){
		maxans=max(maxans,maxx[i][i+n-1]);
		minans=min(minans,minn[i][i+n-1]);
	}
	cout<<minans<<endl<<maxans;
	return 0;
}
