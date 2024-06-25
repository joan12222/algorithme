#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[200005],b[200005],x[200005],vis[200005];
ll dis[200005];
queue<int> q;
void dijkstra(){
	memset(dis,0x3f,sizeof(dis));
	dis[1]=0;
	vis[1]=1;
	q.push(1);
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(now==n){
			cout<<dis[n];
			return;
		}
		vis[now+1]=1;
		dis[now+1]=min(dis[now+1],dis[now]+a[now]);
		q.push(now+1);
		vis[x[now]]=1;
		dis[x[now]]=min(dis[x[now]],dis[now]+b[now]);
		q.push(x[now]);
	}
}
int main(){
	cin>>n;
	for(int i=1;i<n;i++) cin>>a[i]>>b[i]>>x[i];
	dijkstra();
	return 0;
}
