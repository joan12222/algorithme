#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[20][20];
ll f[1<<20];
ll calc_one_group(int x){
	ll ans=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(((1<<i)&x)&&((1<<j)&x)) ans+=a[i][j];
		}
	}
	return ans;
}
int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=1;j<i;j++){
			cin>>a[j][i];
		}
	}
	for(int i=1;i<1<<n;i++){
		f[i]=calc_one_group(i);
		for(int j=i&(i-1);j;j=(j-1)&i) f[i]=max(f[i],f[i^j]+f[j]);
	}
	cout<<f[(1<<n)-1];
	return 0;
}
