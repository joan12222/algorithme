#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[1005],b[1005],c[1005];
ll f[1005][3][1005];
int cmp(int y,int x,int idx){
	if(x==y) return a[idx];
	if(x==0){
		if(y==1) return 2*a[idx];
		else return 0;
	}
	if(x==1){
		if(y==2) return 2*a[idx];
		else return 0;
	}
	if(x==2){
		if(y==0) return 2*a[idx];
		else return 0;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<n;i++) cin>>b[i];
	for(int i=1;i<=n;i++) cin>>c[i];
	f[1][0][0]=cmp(0,c[1],1);
	f[1][1][0]=cmp(1,c[1],1);
	f[1][2][0]=cmp(2,c[1],1);
	for(int i=2;i<=n;i++){
		for(int j=0;j<=2;j++){
			for(int k=0;k<i;k++){
				f[i][j][k]=f[i-1][j][k]+cmp(j,c[i],i);
				if(k==0) continue;
				for(int w=0;w<=2;w++){
					if(j==w) continue;
					f[i][j][k]=max(f[i][j][k],f[i-1][w][k-1]-b[k]+cmp(w,c[i],i));
				}
			}
		}	
	}
	ll ans=0;
	for(int k=0;k<n;k++){
		for(int j=0;j<=2;j++) ans=max(ans,f[n][j][k]);
	}
	cout<<ans;
	return 0;
}
