#include<bits/stdc++.h>
using namespace std;
int n,k;
int vis[1000001]={0};
int nx[4];
struct node{
	int loc,time;
};
queue<node> q;
void bfs(){
	q.push(node{n,0});
	vis[n]=1;
	while(q.size()){
		node now=q.front();
		q.pop();
		if(now.loc==k){
			cout<<now.time;
			return;
		}
		nx[1]=now.loc+1;
		nx[2]=now.loc-1;
		nx[3]=now.loc*2;
		for(int i=1;i<4;i++){
			if(vis[nx[i]]==0&&nx[i]>=0&&nx[i]<4*k){
				q.push(node{nx[i],now.time+1});
				vis[nx[i]]=1;
			}
		}
	}
}
int main(){
	cin>>n>>k;
	bfs();
	return 0;
}