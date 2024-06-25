#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int h,w,maxx,cache[1005][1005];
char a[1005][1005];
map<pair<int,int>,int> mp;
int dfs(int x,int y){
	if(cache[x][y]) return cache[x][y];
	mp[{x,y}]=1;
	int res=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<1||nx>h||ny<1||ny>w||mp.count({nx,ny})) continue;
		if(a[nx][ny]=='#') return cache[x][y]=1;
		res+=dfs(nx,ny)+1;
	}
	return cache[x][y]=res;
}
int main(){
	cin>>h>>w;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cin>>a[i][j];
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(a[i][j]=='#') continue;
			mp.clear();
			maxx=max(maxx,dfs(i,j));
		}
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cout<<cache[i][j]<<" ";
		cout<<endl;
	}
	cout<<maxx;
	return 0;
}
