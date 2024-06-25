#include<bits/stdc++.h>
using namespace std;
int n,a[500005],bucket[1000005]={0};
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bucket[a[i]]++;
	}
	int maxn=0;
	for(int i=1;i<=1000000;i++){
		maxn=max(maxn,bucket[i]);
	}
	int ans=0;
	for(int i=1;i<=1000000;i++){
		if(bucket[i]==maxn) ans++;
	}
	cout<<maxn<<" "<<ans;
	return 0;
}
