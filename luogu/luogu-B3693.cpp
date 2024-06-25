#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull t,n,m,q,u,v,x,y,pre[1005][1005],ans;
int main(){
	cin>>t;
	while(t--){
		ans=0;
		memset(pre,0,sizeof(pre));
		cin>>n>>m>>q;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				ull x;
				cin>>x;
				pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+x;
			}
		}
		while(q--){
			cin>>u>>v>>x>>y;
			ans^=pre[x][y]+pre[u-1][v-1]-pre[u-1][y]-pre[x][v-1];
		}
		cout<<ans<<endl;
	}
	return 0;
}
