#include<bits/stdc++.h>
using namespace std;
int n,m,t,head[200005],d[200005],vis[200005],op,a,l;
struct Node{
	int to,next;
}edges[400005];
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
void add(int a,int b){
	op++;
	edges[op].to=b;
	edges[op].next=head[a];
	head[a]=op;
}
void bfs(){
	memset(d,0x3f3f3f3f,sizeof(d));
	d[1]=0;
	q.push(make_pair(0,1));
	while(!q.empty()){
		int now=q.top().second;
		q.pop();
		if(vis[now]==1) continue;
		vis[now]=1;
		for(int i=head[now];i;i=edges[i].next){
			if(d[edges[i].to]>d[now]+1){
				d[edges[i].to]=d[now]+1;
				q.push(make_pair(d[edges[i].to],edges[i].to));
			}
		}
	}
}
int main(){
	cin>>n>>m>>t;
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		add(x,y+n);
		add(y+n,x);
		add(x+n,y);
		add(y,x+n);
	}
	bfs();
	while(t--){
		cin>>a>>l;
		if(l%2==0){
			if(d[a]<=l) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}else{
			if(d[a+n]<=l) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
	return 0;
}
