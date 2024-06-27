#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int t,h,w,a,b,sx,sy,ex,ey;
char c[55][55];
struct Ball{
	int x,y,sz;
};
void bfs(){
	queue<Ball> q;
	int vis[55][55]={0};
	vis[sx][sy]=1;
	q.push({sx,sy,a});
	while(!q.empty()){
		Ball now=q.front();
		q.pop();
		if(now.x==ex&&now.y==ey&&now.sz==b){
			cout<<"Yes"<<endl;
			return;
		}
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx>=1&&nx<=h&&ny>=1&&ny<=w&&vis[nx][ny]==0){
				if(c[nx][ny]=='*'){
					vis[nx][ny]=1;
					q.push({nx,ny,now.sz+1});
				}else{
					if(now.sz==1) continue;
					vis[nx][ny]=1;
					q.push({nx,ny,now.sz-1});
				}
			}
		}
	}
	cout<<"No"<<endl;
}
int main(){
	freopen("snowball.in","r",stdin);
	freopen("snowball.out","w",stdout);
	cin>>t;
	while(t--){
		cin>>h>>w>>a>>sx>>sy>>b>>ex>>ey;
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++) cin>>c[i][j];
		}
		bfs();
	}
	return 0;
}
