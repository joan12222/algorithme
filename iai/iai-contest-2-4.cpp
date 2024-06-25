#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[1000005],pre[1000005],ans=-1;
int main(){
	freopen("apply.in","r",stdin);
	freopen("apply.out","w",stdout);
	cin>>n;
	for(int i=1,s,t;i<=n;i++){
		cin>>s>>t;
		a[s]++;
		a[t+1]--;
	}
	for(int i=1;i<=1000000;i++){
		pre[i]=pre[i-1]+a[i];
		ans=max(ans,pre[i]);
	}
	cout<<ans;
	return 0;
}
