#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int n,t,a[5005],f[10005];
int main(){
	cin>>n>>t;
	for(int i=1;i<=n;i++) cin>>a[i];
	f[1]=0;
	for(int i=1;i<=n;i++){
		memset(f,0,sizeof(0));
		f[0]=1 ;
		for(int j=1;j<=n;j++){
			if(j==i) continue;
			for(int k=a[j];k<=t;k++) f[k]=(f[k]+f[k-a[j]])%mod;
		}
		cout<<f[t]<<endl;
	}
	return 0;
}
