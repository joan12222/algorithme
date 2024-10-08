#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t;
ll n,l,r,a[100005],ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>l>>r;
		ans=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		ll i=1,j=1,sum=0;
		while(i<=n){
			while(sum<l&&j<=n){
				sum+=a[j];
				j++;
			}
			if(l<=sum&&sum<=r){
				ans++;
				i=j;
				sum=0;
			}else{
				sum-=a[i];
				i++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
