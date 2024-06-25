#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int maxans=-1;
	for(int i=2;i<=n-1;i++){
		int ans=0;
		for(int j=1;j<=i-1;j++) ans+=a[j];
		for(int j=i+1;j<=n;j++) ans+=a[j];
		maxans=max(maxans,ans);
	}
	for(int i=2;i<n-1;i++){
		
	}
	cout<<maxans;
	return 0;
}
