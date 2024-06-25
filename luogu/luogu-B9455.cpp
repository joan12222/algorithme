#include<bits/stdc++.h>
using namespace std;
int n,a[500005],b[500005];
bool validate(int mid){
	int vis[500005]={0},j=1;
	vis[1]=1;
	for(int i=1;i<=n;i++){
		if(vis[i]==0) return false;
		while(j<=n&&a[i]+b[i]+mid>=a[j]) vis[j++]=1;
		if(j==n+1) return true;
	}
	return true;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	int left=0,right=0x3f3f3f3f,ans;
	while(left<=right){
		int mid=(left+right)/2;
		if(validate(mid)){
			right=mid-1;
			ans=mid;
		}else left=mid+1;
	}
	cout<<ans;
	return 0;
}
