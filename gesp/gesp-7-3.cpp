#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int n,m,a[505][505],num,now=1,vis[505][505],ans;
map<vector<pair<int,int> >,int> mp;
vector<pair<int,int> > p;
bool cmp(pair<int,int> x,pair<int,int> y){
	if(x.first==y.first) return x.second<y.second;
	return x.first<y.first;
}
void dfs(int x,int y){
	vis[x][y]=1;
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&vis[nx][ny]==0&&a[nx][ny]==now){
			p.push_back({nx,ny});
			dfs(nx,ny);
		}
	}
}
void work(){
	sort(p.begin(),p.end(),cmp);
	int stx=p[0].first,sty=p[0].second;
	for(int i=0;i<p.size();i++){
		p[i].first-=stx;
		p[i].second-=sty;
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			num=max(num,a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]==now){
				p.clear();
				memset(vis,0,sizeof(vis));
				p.push_back({i,j});
				dfs(i,j);
				//for(int i=0;i<p.size();i++) cout<<p[i].first<<" "<<p[i].second<<endl;
				//cout<<endl;
				work();
				if(!mp.count(p)){
					mp[p]=1;
					ans++;
				}
				now++;
			}
		}
	}
	cout<<ans;
	return 0;
}
