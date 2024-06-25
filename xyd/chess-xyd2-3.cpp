#include<bits/stdc++.h>
using namespace std;
int r[15],c[15];//每一个皇后的行列位置
int n,cnt;
int check(int id){
	for(int i=1;i<id;i++){//检查前面所有的皇后
		if(r[id]==r[i]){//是同一行
			return 0;//不可行
		}else if(c[id]==c[i]){//是同一列
			return 0;//不可行
		}else if(abs(r[id]-r[i])==abs(c[id]-c[i])){//是同一斜线，差值的绝对值相同
			return 0;//不可行
		}
	}
	return 1;//和之前的左右所有皇后不冲突
}
void dfs(int id){
	if(id==n+1){//n个皇后摆完
		cnt++;
		if(cnt<=3){
			for(int i=1;i<=n;i++){
				cout<<c[i]<<" ";
			}
			cout<<endl;
		}
		return;
	}
	for(int i=1;i<=n;i++){//循环n次，有n个位置可以摆放
		r[id]=id;//记录第id个皇后行列位置
		c[id]=i;
		if(check(id)==0){
			continue;
		}
		dfs(id+1);
	}
}
int main(){
	cin>>n;
	dfs(1);
	cout<<cnt;
	return 0;
}