#include<bits/stdc++.h>
using namespace std;
int m;
vector<int> dp[2030];
int f[2030]={0};
int F(int x){
	if(f[x]) return f[x];
	f[x]=1;
	for(int i=0;i<dp[x].size();i++){
		f[x]=max(f[x],F(dp[x][i])+1);
	}
	return f[x];
}
int main(){
	int a,b;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		dp[a].push_back(b);
	}
	cout<<F(2022)-1;
	return 0;
} 
