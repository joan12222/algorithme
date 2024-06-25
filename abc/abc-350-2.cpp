#include<bits/stdc++.h>
using namespace std;
int n,q,vis[1005],ans;
int main(){
	cin>>n>>q;
	ans=n;
	for(int i=1;i<=n;i++) vis[i]=1;
	for(int i=1,x;i<=q;i++){
		cin>>x;
		if(vis[x]){
			ans--;
			vis[x]=0;
		}else{
			ans++;
			vis[x]=1;
		}
	}
	cout<<ans;
	return 0;
}
