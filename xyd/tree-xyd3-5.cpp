#include<bits/stdc++.h>
using namespace std;
int n,m;
int shou[11],fei[11],ans=INT_MAX,vis[11]={0};
void dfs(int k,int shsum,int fesum){
	cout<<k<<" "<<fesum<<" "<<shsum<<endl;
	if(k==m){
		cout<<"ovo"<<endl;
	}
	if(k==n+1){
		if(abs(shsum-fesum)<ans&&(shsum!=0||fesum!=0)){
			ans=abs(shsum-fesum);
		}
		return;
	}
	dfs(k+1,shsum,fesum);
	dfs(k+1,shsum+shou[k],fesum+fei[k]);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>fei[i]>>shou[i];
	}
	dfs(1,0,0);
	cout<<ans;
}