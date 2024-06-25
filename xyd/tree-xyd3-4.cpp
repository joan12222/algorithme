#include<bits/stdc++.h>
using namespace std;
int n;
char tree[1001][1001];
int sum[1001]={0};
void dfs(int k,int lev,int m){
	for(int i=1;i<=n;i++){
		if(tree[k][i]=='1'&&i!=m){
			sum[lev]++;
			dfs(i,lev+1,k);
		}
	}
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>tree[i][j];
		}
	}
	dfs(1,0,0);
	int ans=INT_MIN;
	for(int i=0;i<=n;i++){
		if(sum[i]==0){
			break;
		}
		if(sum[i]>ans){
			ans=sum[i];
		}
	}
	cout<<ans;
    return 0;
}
