#include<bits/stdc++.h>
using namespace std;
int n,past[1005],cnt=1;
bool flag=false;
void dfs(int x,int step){
	if(x==n&&flag==false){
		cout<<step;
		flag=true;
		return;
	}
	if(x>n){
		return;
	}
	for(int i=1;i<=cnt;i++){
		for(int j=1;j<=cnt;j++){
			past[++cnt]=i+j;
			dfs(x+i+j,step+1);
		}
	}
}
int main(){
	cin>>n;
	past[1]=1;
	dfs(1,1);
	return 0;
}