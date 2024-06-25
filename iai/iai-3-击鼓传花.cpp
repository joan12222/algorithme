#include<bits/stdc++.h>
using namespace std;
int n,a[200005],f[200005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	f[n]=a[n];
	int sum=a[n];
	for(int i=n-1;i>0;i--){
		sum+=a[i];
		f[i]=max(f[i+1],sum-f[i+1]);
	}
	cout<<f[1];
	return 0;
}