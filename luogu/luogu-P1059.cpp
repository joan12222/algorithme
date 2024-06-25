#include<bits/stdc++.h>
using namespace std;
int n,a[105],vis[1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		if(vis[a[i]]==0){
			vis[a[i]]=1;
			continue;
		}
		a[i]=1005;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(a[i]==1005){
			cout<<i-1<<endl;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=1005) cout<<a[i]<<" ";
	}
	return 0;
}
