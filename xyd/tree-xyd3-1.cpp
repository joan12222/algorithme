#include<bits/stdc++.h>
using namespace std;
int n,tree[501][501],vis[501][501]={0},a,b;
int main(){
	cin>>n;
	for(int i=1;i<=n-1;i++){
		cin>>tree[i][1]>>tree[i][2];
		vis[tree[i][1]][tree[i][2]]=1;
	}
	while(cin>>a>>b){
		if(vis[a][b]==1||vis[b][a]==1){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}