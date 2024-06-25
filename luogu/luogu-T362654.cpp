#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int INF=0x3f3f3f3f;
ll N,V,W,w[1005],v[1005];
bool validate(int maxx){
	ll f[1005]={0};
	for(int i=1;i<=N;i++){
		for(int j=W;j>=w[i];j--){
			if(w[i]>maxx) continue;
			f[j]=max(f[j-w[i]]+v[i],f[j]);
		}
	}
	return f[W]>=V;
}
int main(){
	cin>>N>>V>>W;
	for(int i=1;i<=N;i++) cin>>w[i]>>v[i];
	ll left=1,right=0;
	for(int i=1;i<=N;i++) right=max(right,w[i]);
	bool flag=false;
	while(left<right){
		int mid=(left+right)/2;
		if(validate(mid)){
			right=mid;
			flag=true;
		}
		else left=mid+1;
	}
	if(flag==false) cout<<"Fail";
	else cout<<right;
	/*
	for(int i=1;i<=W;i++) maxx[i]=-1;
	for(int i=1;i<=N;i++){
		for(int j=W;j>=w[i];j--){
			if(f[j-w[i]]+v[i]>f[j]){
				f[j]=f[j-w[i]]+v[i];
				maxx[j]=max(maxx[j],w[i]); 
			}
		}
	}
	ll ans=INF;
	for(int i=1;i<=W;i++){
		if(f[i]>=V) ans=min(ans,maxx[i]);
	}
	if(ans==INF) cout<<"Fail";
	else cout<<ans;
	*/
	return 0;
}
