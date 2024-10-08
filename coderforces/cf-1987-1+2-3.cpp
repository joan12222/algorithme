#include<bits/stdc++.h>
using namespace std;
int t,n,a[100005],f[100005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		f[n]=a[n];
		for(int i=n-1;i>=1;i--) f[i]=max(f[i+1]+1,a[i]);
		cout<<f[1]<<endl;
	}
	return 0;
}
