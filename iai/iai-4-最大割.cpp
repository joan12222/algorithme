#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,num[30][30]={0};
bool choice[30];
int dfs(int k){
	if(k>n){
		return 0;
	}
	int x=0,y=0;
	for(int i=1;i<k;i++){
		if(choice[i]==false) x+=num[i][k];
		else y+=num[i][k];
	}
	choice[k]=true;
	int pick=dfs(k+1)+x;
	choice[k]=false;
	int drop=dfs(k+1)+y;
	return max(pick,drop);
}
int main(){
	cin>>n>>m;
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		num[x][y]++;
		num[y][x]++;
	}
	choice[1]=true;
	cout<<dfs(2);
	return 0;
}
