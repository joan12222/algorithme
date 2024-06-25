#include<bits/stdc++.h>
using namespace std;
int n,a,b;
long long ans=0;
void dfs(int x){
	if(x>n) return;
	if(x==n){
		ans++;
		return;
	}
	dfs(x+a);
	dfs(x+b);
}
int main(){
	cin>>n>>a>>b;
	dfs(0);
	cout<<ans;
	return 0;
} 
