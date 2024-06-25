#include<bits/stdc++.h>
using namespace std;
int n,m,r,vis[105],ans;
struct Cards{
	int hs,ds;
}fs[105],xf[105];
bool cmp(Cards x,Cards y){
	return x.ds<y.ds;
}
int main(){
	cin>>n>>m>>r;
	for(int i=1;i<=n;i++) cin>>fs[i].hs;
	for(int i=1;i<=n;i++) cin>>fs[i].ds;
	for(int i=1;i<=n;i++) cin>>xf[i].hs;
	for(int i=1;i<=n;i++) cin>>xf[i].ds;
	sort(xf+1,xf+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(xf[j].hs==fs[i].hs&&xf[j].ds>fs[i].ds&&vis[j]==0){
				vis[j]=1;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0) ans++;
	}
	cout<<ans;
	return 0;
}
