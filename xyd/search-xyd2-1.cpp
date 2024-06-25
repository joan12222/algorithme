#include<bits/stdc++.h>
using namespace std;
int n;
int ans[10];//记录每次摸出球的编号
void dfs(int k){//k当前循环层数,当前摸得第k个球
	if(k==n+1){//到n+1层，不循环了
		for(int i=1;i<=n;i++){//输出之前每次摸出的球的编号
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){//当前第k次摸出来的球
		ans[k]=i;//第k个摸出的球的编号存入第k个位置
		dfs(k+1);
	}
}
int main()
{
	cin>>n;
	dfs(1);//从第一层开始循环
	return 0;
}