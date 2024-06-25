#include<bits/stdc++.h>
using namespace std;
int n,ans[1001],num=0;
char tree[1001][1001];
void dfs(int k,int m){
	for(int i=1;i<=n;i++){
		if(tree[k][i]=='1'&&i!=m){
			dfs(i,k);
			ans[num++]=i;
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
	int cnt=0;
	for(int i=2;i<=n;i++){
		cnt=0;
		for(int j=1;j<=n;j++){
			if(tree[i][j]=='1'){
				cnt++;
			}
		}
		if(cnt==1){
			ans[num++]=i;
		}
	}
	cout<<num<<endl;
	for(int i=0;i<num;i++){
		cout<<ans[i]<<" ";
	}
}