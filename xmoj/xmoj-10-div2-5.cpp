#include<bits/stdc++.h>
using namespace std;
struct Node{
	int next,val;
	Node(int y,int z){next=y,val=z;};
};
struct S_node{
	int idx,dist;
	S_node(int x,int y){idx=x,dist=y;};
	bool operator <(const S_node &a) const{return dist>a.dist;};
};
vector<Node> edges[205];
int n,m,g,s,path[205];
bool cmp(Node x,Node y){
	return x.next<y.next;
}
void dijkstra(){
	memset(path,0x3f,sizeof(path));
	priority_queue<S_node> q;
	int dis[205],vis[205]={0};
	memset(dis,0x3f,sizeof(dis));
	dis[g]=0;
	q.push(S_node{g,dis[g]});
	while(!q.empty()){
		S_node now=q.top();
		q.pop();
		if(vis[now.idx]==1) continue;
		vis[now.idx]=1;
		for(int i=0;i<edges[now.idx].size();i++){
			Node y=edges[now.idx][i];
			if(vis[y.next]==1) continue;
			if(dis[y.next]>y.val+now.dist){
				dis[y.next]=y.val+now.dist;
				q.push(S_node(y.next,dis[y.next]));
				path[y.next]=min(path[y.next],now.idx);
			}
		}
	}
}
void print_path(int s,int e){
	if(s==e){
		cout<<s<<" ";
		return;
	}
	print_path(s,path[e]);
	cout<<e<<" ";
}
int main(){
	//freopen("path.in","r",stdin);
	//freopen("path.out","w",stdout);
	memset(path,0x3f,sizeof(path));
	cin>>n>>m>>g>>s;
	for(int i=1,x,y,z;i<=m;i++){
		cin>>x>>y>>z;
		edges[x].push_back(Node(y,z));
		edges[y].push_back(Node(x,z));
	}
	for(int i=0;i<n;i++) sort(edges[i].begin(),edges[i].end(),cmp);
	dijkstra();
	print_path(g,s);
	return 0;
}
