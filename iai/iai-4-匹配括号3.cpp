#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
bool choice[105];
void dfs(int k,int left,int right){
	if(left==n){
		if(cnt>=1000) exit(0);
		cnt++;
		for(int i=1;i<=k;i++){
			if(choice[i]==true) cout<<"(";
			else cout<<")";
		}
		for(int i=k+1;i<=n*2;i++) cout<<")";
		cout<<endl;
		return;
	}
	if(left<right) return;
	choice[k]=true;
	dfs(k+1,left+1,right);
	choice[k]=false;
	dfs(k+1,left,right+1);
}
int main(){
	cin>>n;
	dfs(1,0,0);
	return 0;
}
