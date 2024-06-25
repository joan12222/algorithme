#include<bits/stdc++.h>
using namespace std;
string s;
char ans[15];
void dfs(int k){
	if(k==s.size()){
		for(int i=0;i<s.size();i++){
			cout<<ans[i];
		}
		cout<<endl;
		return;
	}
	if(s[k]!='o'){
		ans[k]=s[k];
		if(k==0||ans[k]!=ans[k-1]){
			dfs(k+1);
		}
	}else{
		ans[k]='B';
		if(k==0||ans[k]!=ans[k-1]){
			dfs(k+1);
		}
		ans[k]='G';
		if(k==0||ans[k]!=ans[k-1]){
			dfs(k+1);
		}
		ans[k]='R';
		if(k==0||ans[k]!=ans[k-1]){
			dfs(k+1);
		}
	}
}
int main(){
	freopen("color.in","r",stdin);
	freopen("color.out","w",stdout);
	cin>>s;
	dfs(0);
	return 0;
}