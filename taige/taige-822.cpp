#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
	freopen("road.in","r",stdin);
	freopen("road.out","w",stdout);
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]>a[i-1]){
			ans+=a[i]-a[i-1];
		}
	}
	cout<<ans;
	return 0;
}