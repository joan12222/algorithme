#include<bits/stdc++.h>
using namespace std;
int n,s,t,a[205],vis[205];
struct Node{
	int x,step;
};
queue<Node> q;
void bfs(int num){
	vis[num]=1;
	q.push({num,0});
	while(!q.empty()){
		Node now=q.front();
		q.pop();
		if(now.x==t){
			cout<<now.step;
			return;
		}
		for(int i=-1;i<=1;i+=2){
			int nx=now.x+i*a[now.x];
			if(nx<1||nx>n||vis[nx]==1) continue;
			vis[nx]=1;
			q.push({nx,now.step+1});
		}
	}
	cout<<"-1";
	return;
}
int main(){
	cin>>n>>s>>t;
	for(int i=1;i<=n;i++) cin>>a[i];
	bfs(s);
	return 0;
}
