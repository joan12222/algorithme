#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k,a[6005],b[3005];
ll f[3005][105];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[n+i]=a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			for(int j=i+1;j<=i+n;j++) b[j-i]=a[i];
			break;
		}
	}
	memset(f,0x3f3f3f3f,sizeof(f));
	f[1][1]=0;
	for(int i=1;i<=n;i++){
		for(int j=2;j<=min(i,k);j++){
			for(int w=1;w<i;w++){
				f[i][j]=min(f[i][j],f[w][j-1]+b[i]*b[i]+max(b[i],b[w])*(i-w)*(i-w-1)/2);
				if(j==k) f[i][j]=min(f[i][j],f[w][j]+b[i]*b[i]+max(b[i],b[w])*(i-w)*(i-w-1)/2);
			}
		}
	}
	ll ans=LONG_LONG_MAX;
	for(int i=1;i<=n;i++) ans=min(ans,f[i][k]+b[n+1]*b[n+1]+max(b[i],b[n+1])*(n+1-i)*(n-i)/2);
	cout<<ans;
	return 0;
}
