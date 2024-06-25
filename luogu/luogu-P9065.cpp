#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf=0x3f3f3f3f;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,k,a[3005][3005],if_can[3005][3005],vis1[3005][3005],vis2[3005][3005],bucket[6000005];
vector<pair<int,int>> fly;
int bfs(int sx,int sy,int ex,int ey,int vis[][3005]){
	queue<pair<int,int>> q;
	int num=inf;
	vis[sx][sy]=0;
	q.push(make_pair(sx,sy));
	while(!q.empty()){
		int nowx=q.front().first;
		int nowy=q.front().second;
		q.pop();
		if(num==inf&&if_can[nowx][nowy]) num=vis[nowx][nowy];
		for(int i=0;i<4;i++){
			int nx=nowx+dx[i];
			int ny=nowy+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]!=0&&vis[nx][ny]==inf){
				vis[nx][ny]=vis[nowx][nowy]+1;
				q.push(make_pair(nx,ny));
			}
		}
	}
	return num;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
	for(int i=1,x,y;i<=k;i++){
		cin>>x>>y;
		if_can[x][y]=1;
		fly.push_back(make_pair(x,y));
	}
	memset(vis1,inf,sizeof(vis1));
	int cnt1=bfs(1,1,n,m,vis1);
	memset(vis2,inf,sizeof(vis2));
	int cnt2=bfs(n,m,1,1,vis2);
	int ans=min(cnt1+cnt2+2,vis1[n][m]);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(vis1[i][j]==cnt1&&if_can[i][j]) bucket[a[i][j]]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(vis2[i][j]==cnt2&&if_can[i][j]){
				if(bucket[a[i][j]]!=0) ans=min(ans,cnt1+cnt2+1);
			}
		}
	}
	if(ans==inf) cout<<"-1";
	else cout<<ans;
	return 0;
}
