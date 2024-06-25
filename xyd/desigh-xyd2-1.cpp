#include<bits/stdc++.h>
using namespace std;
int n,k,cnt,sum;//n个选m个
int a[21],ans[21],vis[21]={0};
bool isPrime(int x){
	if(x==1||x==0){
		return false;
	}
	if(x==2){
		return true;
	}
	for(int i=2;i<x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
void dfs(int m){
	if(m==k+1){
		sum=0;
		for(int i=1;i<=k;i++){
			sum+=ans[i];
		}
		if(isPrime(sum)==true){
			cnt++;
		}
		return;
	}
	for(int i=1;i<=k;i++){
		if(vis[i]==0){
			ans[i]=a[i];
			vis[i]=1;
			dfs(m+1);
			vis[i]=0;
		}
	}
}
int main(){
	//输入，所有数字存入num数组
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<cnt;
}