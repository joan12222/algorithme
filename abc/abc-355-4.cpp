#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,l[500005],r[500005],ans;
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>l[i]>>r[i];
	sort(l,l+n);
	sort(r,r+n);
	ans=(ll)(n*(n-1)/2);
	for(int i=0,j=0;i<n;i++){
		while(j<n&&r[j]<l[i]) j++;
		ans-=j;
	}
	cout<<ans;
	return 0;
}
