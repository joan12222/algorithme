#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N,W,w[505],v[505],f[250005],vsum=0;
int main(){
	cin>>N>>W;
	for(int i=1;i<=N;i++){
		cin>>v[i]>>w[i];
		vsum+=v[i];
	}
	for(int i=0;i<100005;i++) f[i]=1e10;
	f[0]=0;
	for(int i=1;i<=N;i++){
		for(int j=vsum;j>=v[i];j--){
			f[j]=min(f[j],f[j-v[i]]+w[i]);
		}
	}
	for(int i=vsum;i>=1;i--){
		if(f[i]<=W){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
