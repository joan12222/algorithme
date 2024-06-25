#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
	ll x,y;
};
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
ll n,h,w,sx,sy,ex,ey,vis[205][205],hp[205][205];
map<pair<ll,ll>,ll> mp;
char c[205][205];
queue<Node> q;
void bfs(){
	q.push({sx,sy});
	vis[sx][sy]=1;
	if(mp.count({sx,sy})) hp[sx][sy]=mp[{sx,sy}];
	while(!q.empty()){
		Node now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx<1||nx>h||ny<1||ny>w||c[nx][ny]=='#'||hp[now.x][now.y]<1) continue;
			if(vis[nx][ny]==0){
				if(c[nx][ny]=='.'){
					vis[nx][ny]=1;
					hp[nx][ny]=hp[now.x][now.y]-1;
				}else{
					vis[nx][ny]=1;
					if(mp[{nx,ny}]>hp[now.x][now.y]-1){
						hp[nx][ny]=mp[{nx,ny}]-1;
						mp[{nx,ny}]=0;
					}
				}
				q.push({nx,ny});
			}else{
				if(hp[nx][ny]>hp[now.x][now.y]-1){
					vis[nx][ny]=1;
					hp[nx][ny]=hp[now.x][now.y]-1;
					q.push({nx,ny});
				}
			}
		}
	}
	if(vis[ex][ey]) cout<<"Yes";
	else cout<<"No";
}
int main(){
	cin>>h>>w;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>c[i][j];
			if(c[i][j]=='S') sx=i,sy=j;
			if(c[i][j]=='T') ex=i,ey=j;
		}
	}
	cin>>n;
	for(ll i=1,r,c,e;i<=n;i++){
		cin>>r>>c>>e;
		mp[{r,c}]=e;
	}
	bfs();
	return 0;
}
