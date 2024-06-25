#include<bits/stdc++.h>
using namespace std;
int n,sx,sy,ex,ey;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int vis[51][51]={0};
char a[51][51];
struct MP{
	int x,y;
}mp1[2505],mp2[2505];
struct node{
	int a,b;
};
queue<node> q;
int bfs(int sx,int sy,int ex,int ey,struct MP*z){
	int cnt1=1;
	vis[sx][sy]=1;
	q.push(node{sx,sy});
	z[cnt1].x=sx;
	z[cnt1].y=sy;
	cnt1++;
	while(!q.empty()){
		node now=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int na=now.a+dx[i];
			int nb=now.b+dy[i];
			if(na==ex&&nb==ey){
				return 0;
			}
			if(na>=1&&na<=n&&nb>=1&&nb<=n&&vis[na][nb]==0&&a[na][nb]=='0'){
				vis[na][nb]=1;
				z[cnt1].x=na;
				z[cnt1].y=nb;
				cnt1++;
				q.push(node{na,nb});
			}
		}
	}
	return cnt1;
}
int main(){
	cin>>n>>sx>>sy>>ex>>ey;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int op1=bfs(sx,sy,ex,ey,mp1);
	if(op1==0){
		cout<<"0";
		return 0;
	}
	int op2=bfs(ex,ey,sx,sy,mp2);
	int sum,ans=INT_MAX;
	for(int i=1;i<op1;i++){
		for(int j=1;j<op2;j++){
			sum=pow((mp1[i].x-mp2[j].x),2)+pow((mp1[i].y-mp2[j].y),2);
			if(sum<ans){
				ans=sum;
			}
		}
	}
	cout<<ans;
	return 0;
}