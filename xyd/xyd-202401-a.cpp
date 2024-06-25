#include<bits/stdc++.h>
using namespace std;
int n,e,a[1000005],ans;
int main(){
	cin>>n>>e;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1,j=1;i<=n;i++){
		while(j<n&&a[j+1]-a[i]<=2*e) j++;
		ans=max(ans,j-i+1);
	}
	cout<<ans;
	return 0;
}
