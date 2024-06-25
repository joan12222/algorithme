#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,W,v[105],w[105],k;
ll f[40005];
int main(){
	cin>>n>>W;
	for(int i=1,vv,ww,mm;i<=n;i++){
		cin>>vv>>ww>>mm;
		int now=1;
		while(mm>=now){
			w[++k]=ww*now;
			v[k]=vv*now;
			mm-=now;
			now*=2;
		}
		if(mm>0){
			w[++k]=ww*mm;
			v[k]=vv*mm;
		}
	}
	for(int i=1;i<=k;i++){
		for(int j=W;j>=w[i];j--) f[j]=max(f[j-w[i]]+v[i],f[j]);
	}
	cout<<f[W];
	return 0;
}
