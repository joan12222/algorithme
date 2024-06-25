#include<bits/stdc++.h>
using namespace std;
int n,q[15],a[15],b[15],ans;
/*
void dfs(int num[15],int cnt){
	for(int i=1;i<=n;i++){
		if(num[i]>q[i]){
			ans=max(ans,cnt-1);
			return;
		}
	}
	int num1[15];
	for(int i=1;i<=n;i++) num1[i]=num[i];
	for(int i=1;i<=n;i++) num1[i]+=a[i];
	dfs(num1,cnt+1);
	for(int i=1;i<=n;i++) num1[i]=num[i];
	for(int i=1;i<=n;i++) num1[i]+=b[i];
	dfs(num1,cnt+1);
}
*/
bool check(int numa[15]){
	for(int i=1;i<=n;i++){
		if(numa[i]>q[i]) return false;
	}
	return true;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>q[i];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	//int num[15]={0};
	//dfs(num,0);
	int numa[15]={0},numofa=0;
	while(check(numa)){
		for(int i=1;i<=n;i++) numa[i]+=a[i];
		numofa++;
	}
	numofa--;
	for(int i=0;i<=numofa;i++){
		//cout<<"aaa";
		int add=1e9;
		for(int j=1;j<=n;j++){
			if(b[j]==0) continue;
			add=min(add,(q[j]-i*a[j])/b[j]);
		}
		ans=max(ans,i+add);
	}
	cout<<ans;
	return 0;
}
