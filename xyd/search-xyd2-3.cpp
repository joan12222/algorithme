#include<bits/stdc++.h>
using namespace std;
int n;
int ans[10]={1};//拆出来的每个数字
int m,cnt=0;//n分成m份
void dfs(int k,int sum){//k当前循环层数,当前摸得第k个球
	if(k==m+1){//到n+1层，不循环了
		if(!sum){
			cnt++;
		}
		return;
	}
	for(int i=ans[k-1];i<=n;i++){//当前第k次摸出来的球
		ans[k]=i;//把当前拆出来的数字存到ans
		dfs(k+1,sum-i);//拆下一个数字
	}
}
int main()
{
	cin>>n>>m;
	dfs(1,n);
	cout<<cnt;
	return 0;
}