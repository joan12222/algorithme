#include<bits/stdc++.h>
using namespace std;
int n,m,vis[5005]={0},a[11];
struct node{
	int mod;
	string s;
};
queue<node> q;
void bfs(){
	while(!q.empty()){
		node now=q.front();
		q.pop();
		int mod=now.mod%n;
		if(mod==0){
			cout<<now.s;
			return;
		}
		for(int i=1;i<=m;i++){
			mod=(now.mod*10+a[i])%n;
			if(vis[mod]==0){
				vis[mod]=1;
				q.push({mod,now.s+char('0'+a[i])});
			}
		}
	}
	cout<<"0"; 
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	sort(a,a+m+1);
	for(int i=1;i<=m;i++){
		if(a[i]!=0){
			vis[a[i]%n]=1;
			string s="";
			s+=char(a[i]+'0');
			q.push(node{a[i]%n,s});
		}
	}
	bfs();
	return 0;
}