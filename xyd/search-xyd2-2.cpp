#include<bits/stdc++.h>
using namespace std;
int n,num=9;
int ans[10];//记录每次摸出球的编号
int vis[10];//下标：球的编号 值：下标对应的球是否被摸了 0：盒中 1:被摸了
void dfs(int k){//k当前循环层数,当前摸得第k个球
	if(k==n+1){//到n+1层，不循环了
		for(int i=1;i<k;i++){//输出之前每次摸出的球的编号
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=9;i++){//当前第k次摸出来的球
		if(!vis[i]){
			vis[i]=1;
			ans[k]=i;//第k个摸出的球的编号存入第k个位置
			dfs(k+1);//摸下一个球
			vis[i]=0;//等待这次方案摸结束后，充值状态
		}
		
	}
}
int main()
{
	cin>>n;
	dfs(1);//从第一层开始循环
	return 0;
}