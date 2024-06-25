#include<bits/stdc++.h>
using namespace std;
int n,a[105],f[105],d[105],ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i]=1;
		d[i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i]>a[j]) f[i]=max(f[i],f[j]+1);
		}
	}
	for(int i=n;i>=1;i--){
		for(int j=n;j>i;j--){
			if(a[i]>a[j]) d[i]=max(d[i],d[j]+1);
		}
		ans=max(ans,f[i]+d[i]-1);
	}
	cout<<n-ans;
	return 0;
}
