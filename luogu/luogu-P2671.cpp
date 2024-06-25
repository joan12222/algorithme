#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e4+7;
ll n,m,a[100005],sum_odd[100005][3],sum_eve[100005][3],cnt[100005][2],ans;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1,x;i<=n;i++){
		cin>>x;
		if(i%2==0){
			ans=(ans%mod+sum_eve[x][0]+i*sum_eve[x][1]%mod+a[i]*sum_eve[x][2]%mod+i*a[i]*cnt[x][1]%mod)%mod;
			sum_eve[x][0]=(sum_eve[x][0]+a[i]*i)%mod;
			sum_eve[x][1]=(sum_eve[x][1]+a[i])%mod;
			sum_eve[x][2]=(sum_eve[x][2]+i)%mod;
			cnt[x][1]=(cnt[x][1]+1)%mod;
		}else{
			ans=(ans%mod+sum_odd[x][0]+i*sum_odd[x][1]%mod+a[i]*sum_odd[x][2]%mod+i*a[i]*cnt[x][0]%mod)%mod;
			sum_odd[x][0]=(sum_odd[x][0]+a[i]*i)%mod;
			sum_odd[x][1]=(sum_odd[x][1]+a[i])%mod;
			sum_odd[x][2]=(sum_odd[x][2]+i)%mod;
			cnt[x][0]=(cnt[x][0]+1)%mod;
		}
	}
	cout<<ans%mod;
	return 0;
}
