#include<bits/stdc++.h>
using namespace std;
int dx[]={-2,-2,-1,-1,1,1,2,2};
int dy[]={-1,1,-2,2,-2,2,-1,1};
int t,xx,yy,vis[105][105];
map<pair<int,int>,int> mp;
void dfs(int x,int y,int c){
	mp[{x,y}]=1;
	if(c==3){
		cout<<x<<" "<<y<<endl;
		return;
	}
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(vis[nx][ny]==0){
			vis[nx][ny]=1;
			dfs(nx,ny,c+1);
			vis[nx][ny]=0;
		}
	}
}
int main(){
	//freopen("knight.in","r",stdin);
	//freopen("knight.out","w",stdout);
	vis[0][0]=1;
	dfs(0,0,1);
	cin>>t;
	while(t--){
		cin>>xx>>yy;
		if(mp.count({xx,yy})) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
