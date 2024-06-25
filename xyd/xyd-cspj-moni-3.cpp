#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,k,ans;
char a[10][10];
bool check(int x,int y){
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&a[nx][ny]=='@') return true;
	}
	return false;
}
void dfs(int step){
	if(step==k){
		ans++;
		return;
	}
	vector<pair<int,int> > q;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]!='.') continue;
			if(check(i,j)){
				a[i][j]='@';
				dfs(step+1);
				a[i][j]='#';
				q.push_back({i,j});
			}
		}
	}
	for(int i=0;i<q.size();i++) a[q[i].first][q[i].second]='.';
}
int main(){
	freopen("draw.in","r",stdin);
	freopen("draw.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='.'){
				a[i][j]='@';
				dfs(1);
				a[i][j]='#';
			}
		}
	}
	cout<<ans;
	return 0;
}
