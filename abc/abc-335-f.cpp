#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
#define ll long long
int n,a[200005];
ll f[200005],cache[460][460];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		f[i]=1;
		if(a[i]>=450){
			for(int j=i+a[i];j<=n;j+=a[i]) f[i]=(f[i]+f[j])%mod;
		}else{
			f[i]=(f[i]+cache[a[i]][i%a[i]])%mod;
		}
		for(int j=1;j<450;j++) cache[j][i%j]=(cache[j][i%j]+f[i])%mod;
	}
	cout<<f[1];
	return 0;
}
