#include<bits/stdc++.h>
using namespace std;
int n;
int shou[11],fei[11],ans=INT_MAX,vis[11]={0};
void dfs(int k,int shsum,int fesum){
	if(k==n+1){
		if(abs(shsum-fesum)<ans&&(shsum!=0||fesum!=0)){
			ans=abs(shsum-fesum);
		}
		return;
	}
	dfs(k+1,shsum+shou[k],fesum+fei[k]);
	dfs(k+1,shsum,fesum);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>fei[i]>>shou[i];
	}
	dfs(1,0,0);
	cout<<ans;
}