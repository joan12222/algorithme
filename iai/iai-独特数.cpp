#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,vis[15];
ll a[15];
vector<ll> v;
void dfs(int k){
	if(k>0){
		ll m=0;
		for(int i=0;i<k;i++) m=m*10+a[i];
		v.push_back(m);
	}
	if(k>7) return;
	for(int digit=0;digit<10;digit++){
		if(vis[digit]==0){
			if(k==0&&digit==0) continue;
			a[k]=digit;
			vis[digit]=1;
			dfs(k+1);
			vis[digit]=0;
		}
	}
}
int main(){
	cin>>n;
	dfs(0);
	sort(v.begin(),v.end());
	cout<<v[n-1];
	return 0;
}
