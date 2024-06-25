#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[105],sum=0;
ll f[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
		f[a[i]]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=a[i];j<=sum+a[i];j++) f[j]|=f[j-a[i]];
	}
	for(int i=1;i<=sum;i++){
		if(f[i]==1) cout<<i<<" ";
	}
	cout<<endl;

	f[0]=1;
	for(int i=1;i<=n;i++){	
		for(int j=sum;j>=a[i];j--) f[j]|=f[j-a[i]];
	}
	for(int i=1;i<=sum;i++){
		if(f[i]==1) cout<<i<<" ";
	}
	cout<<endl;
	
	int ans=0;
	for(int i=1;i<=sum;i++){
		if(f[i]==1) ans++;
	}
	cout<<ans-1;
	return 0;
}
