#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[305];
ll ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int left=0,right=n;
	while(left<right){
		ans+=(a[left]-a[right])*(a[left]-a[right]);
		left++;
		ans+=(a[right]-a[left])*(a[right]-a[left]);
		right--;
	}
	cout<<ans;
	return 0;
}
