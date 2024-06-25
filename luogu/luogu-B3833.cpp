#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[100005],ans=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans+=log2(a[i]);
	}
	ll sum=ans/n;
	ll cnt=ans-(sum*n);
	cout<<(1<<sum)*(n-cnt)+(1<<sum+1)*cnt;
	return 0;
} 
