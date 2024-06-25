#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int n,d[100005],cnt[100005]={0};
long long num(int a,int b){
	long long pro=1;
	for(int i=1;i<=b;i++) pro=pro*(a-i+1)%mod;
	return pro;
}
int main(){
	cin>>n;
	int maxn=-1;
	for(int i=1;i<=n;i++){
		cin>>d[i];
		maxn=max(maxn,d[i]);
		cnt[d[i]]++;
	}
	long long ans=1;
	ans=ans*cnt[1]%mod;
	for(int i=3;i<=maxn;i++){
		if(cnt[i]<=cnt[i-1]) ans=ans*num(cnt[i-1],cnt[i])%mod;
		else ans=ans*num(cnt[i-1],cnt[i-1])*num(cnt[i-1],cnt[i]%cnt[i-1])%mod;
	}
	cout<<ans;
	return 0;
}
