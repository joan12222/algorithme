#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
struct Node{
	int x,y;
};
int n,sx1=-1,sy1,sx2,sy2,vis[65][65][65][65],dis[65][65][65][65],ans;
char a[65][65];
queue<Node> q; 
void bfs(){
	q.push({sx1,sy1});
	q.push({sx2,sy2});
	vis[sx1][sy1][sx2][sy2]=1;
	dis[sx1][sy1][sx2][sy2]=0;
	while(!q.empty()){
		Node now1=q.front();
		q.pop();
		Node now2=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx1=now1.x+dx[i];
			int ny1=now1.y+dy[i];
			int nx2=now2.x+dx[i];
			int ny2=now2.y+dy[i];
			if(nx1<1||nx1>n||ny1<1||ny1>n) nx1=now1.x,ny1=now1.y;
			if(nx2<1||nx2>n||ny2<1||ny2>n) nx2=now2.x,ny2=now2.y;
			if(a[nx1][ny1]=='#') nx1=now1.x,ny1=now1.y;
			if(a[nx2][ny2]=='#') nx2=now2.x,ny2=now2.y;
			if(vis[nx1][ny1][nx2][ny2]) continue;
			dis[nx1][ny1][nx2][ny2]=min(dis[nx1][ny1][nx2][ny2],dis[now1.x][now1.y][now2.x][now2.y]+1);
			vis[nx1][ny1][nx2][ny2]=1;
			q.push({nx1,ny1});
			q.push({nx2,ny2});
		}
	}
	//cout<<"-1";
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]=='P'){
				if(sx1==-1) sx1=i,sy1=j;
				else sx2=i,sy2=j;
			}
		}
	}
	//cout<<sx1<<" "<<sy1<<" "<<sx2<<" "<<sy2<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				for(int w=1;w<=n;w++) dis[i][j][k][w]=2e9;
			}
		}
	}
	bfs();
	ans=2e9;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ans=min(ans,dis[i][j][i][j]);
			//cout<<dis[i][j][i][j]<<" ";
		}
		//cout<<endl;
	}
	if(ans==2e9) cout<<"-1";
	else cout<<ans;
	return 0;
}
