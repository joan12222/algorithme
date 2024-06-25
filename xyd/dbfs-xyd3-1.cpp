#include<bits/stdc++.h>
using namespace std;
int n,m;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char a[101][101];
int vis[101][101]={0},flag[30]={0};
int cnt[30]={0};
struct node{
	int x,y,step;
};
struct CSM{
	int x1,y1;
	int x2,y2;
}csm[30];
queue<node> q;
void bfs(){
	q.push(node{1,1,0});
	vis[1][1]=1;
	while(q.size()){
		node now=q.front();
		q.pop();
		if(now.x==n&&now.y==m){
			cout<<now.step;
			return;
		}
		for(int i=0;i<4;i++){
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(nx<1||nx>n||ny<1||ny>m||a[nx][ny]=='1'){
				continue;
			}
			if(a[nx][ny]>='A'&&a[nx][ny]<='Z'){
				int num1=nx,num2=ny;
				if(nx==csm[a[num1][num2]-'A'+1].x1){
					nx=csm[a[num1][num2]-'A'+1].x2;
					ny=csm[a[num1][num2]-'A'+1].y2;
				}else{
					nx=csm[a[num1][num2]-'A'+1].x1;
					ny=csm[a[num1][num2]-'A'+1].y1;
				}
			}
			if(vis[nx][ny]==1){
				continue;
			}
			q.push(node{nx,ny,now.step+1});
			vis[nx][ny]=1;
		}
	}
	cout<<"No Solution.";
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]>='A'&&a[i][j]<='Z'){
				if(flag[a[i][j]-'A'+1]==0){
					csm[a[i][j]-'A'+1].x1=i,csm[a[i][j]-'A'+1].y1=j;
					flag[a[i][j]-'A'+1]=1;
				}else{
					csm[a[i][j]-'A'+1].x2=i,csm[a[i][j]-'A'+1]. y2=j;
				}
			}
		}
	}
	bfs();
}