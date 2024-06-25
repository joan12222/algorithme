#include<bits/stdc++.h>
using namespace std;
int n,w[105],v[105],sum=0;
int f[500005],buf[500005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i];
		sum+=w[i];
	}
	sum/=2;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=sum-w[i];j++){
			buf[j+w[i]]=f[j]+v[i];
		}
		for(int j=0;j<=sum;j++){
			f[j]=max(f[j],buf[j]);
		}
	}
	cout<<f[sum];
	return 0;
}
