#include<bits/stdc++.h>
using namespace std;
int n,d,a[500005],dis[500005];
int main(){
	cin>>n>>d;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		dis[i]=1;
		for(int j=i-1;j>=1;j--){
			if(abs(a[j]-a[i])<=d) dis[i]=max(dis[i],dis[j]+1);
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++) ans=max(ans,dis[i]);
	cout<<ans;
	return 0;
}
