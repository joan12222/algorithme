#include<bits/stdc++.h>
using namespace std;
int n,p;
int vis[7][300005]={0};
stack<int> st[7];
int main(){
	cin>>n>>p;
	for(int i=1;i<=6;i++) st[i].push(0);
	int ans=0;
	for(int i=1,x,y;i<=n;i++){
		cin>>x>>y;
		while(st[x].top()>y){
			vis[x][st[x].top()]=0;
			st[x].pop();
			ans++;
		}
		if(st[x].top()<y){
			st[x].push(y);
			ans++;
			vis[x][y]=1;
		}
	}
	cout<<ans;
	return 0;
}
