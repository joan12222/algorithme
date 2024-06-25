#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,a[5005];
ll reverse_order=0,order=0;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]) reverse_order++;
			else if(a[i]<a[j]) order++;
		}
	}
	ll ans1=k*(k+1)/2;
	ll ans2=k*(k-1)/2;
	cout<<ans1*reverse_order+ans2*order;
	return 0;
}
