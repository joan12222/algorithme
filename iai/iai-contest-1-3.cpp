#include<bits/stdc++.h>
using namespace std;
int n,m,edges[25][25],ans;
bool choice[25];
int dfs(int k){
	if(k>n) return 0;
	int clasha=0,clashb=0;
	for(int i=1;i<k;i++){
		if(choice[i]==false) clasha+=edges[i][k];
		else clashb+=edges[i][k];
	}
	choice[k]=true;
	int pick=dfs(k+1)+clasha;
	choice[k]=false;
	int drop=dfs(k+1)+clashb;
	return max(pick,drop);
}
int main(){
	//freopen("clash.in","r",stdin);
	//freopen("clash.out","w",stdout);
	cin>>n>>m;
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		edges[x][y]++;
		edges[y][x]++;
	}
	choice[1]=true;
	cout<<dfs(1);
	return 0;
}
