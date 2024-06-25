#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int t,s,e,vis[100005];
struct Node{
	int pos,step;
};
void bfs(){
	queue<Node> q;
	vis[s]=1;
	q.push(Node{s,0});
	while(!q.empty()){
		Node now=q.front();
		q.pop();
		if(now.pos==e){
			cout<<now.step<<endl;
			return;
		}
		int dx[]={1,-1,now.pos};
		for(int i=0;i<3;i++){
			int nx=now.pos+dx[i];
			if(nx>=1&&nx<=100000&&vis[nx]==0){
				vis[nx]=1;
				q.push(Node{nx,now.step+1});
			}
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		memset(vis,0,sizeof(vis));
		cin>>s>>e;
		bfs();
	}
	return 0;
}
