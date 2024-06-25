#include<bits/stdc++.h>
using namespace std;
int dx[]={1,1,1,0,0,-1,-1,-1};
int dy[]={1,-1,0,-1,1,1,-1,0};
char a[5][5];
int vis[5][5];
string ans="ZZZ",maxx="ZZZ";
void cmp(string &s1,string &s2){
	if(s1==s2) return;
	for(int i=0;i<s1.size();i++){
		if(s1[i]==s2[i]) continue;
		if(s1[i]>s2[i]) s1=s2;
		break; 
	}
}
void dfs(int x,int y,string s,int t){
	if(t==3){
		cmp(ans,s);
		return;
	}
	if(t==1) s+=a[x][y];
	char c='Z';
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>3||nx<1||ny>3||ny<1||vis[nx][ny]) continue;
		if(a[nx][ny]<c) c=a[nx][ny];
	}
	//cout<<c<<endl;
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>3||nx<1||ny>3||ny<1||vis[nx][ny]) continue;
		if(a[nx][ny]==c){
			//cout<<"aaa";
			vis[nx][ny]=1;
			dfs(nx,ny,s+c,t+1);
			vis[nx][ny]=0;
		}
	}
}
int main(){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++) cin>>a[i][j];
	}
	char c='Z';
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(a[i][j]<c) c=a[i][j];
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(a[i][j]==c){
				memset(vis,0,sizeof(vis));
				vis[i][j]=1;
				dfs(i,j,"",1);
				//cout<<ans<<endl;
				cmp(maxx,ans);
			}
		}
	}
	cout<<maxx;
	return 0;
}
