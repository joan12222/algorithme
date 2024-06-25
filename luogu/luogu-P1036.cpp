#include<bits/stdc++.h>
using namespace std;

int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++) cin>>a[i][j];
	}
	if(n<10) simple_dfs(n);
	else if(n<15) adv_dfs(n);
	else super_dfs(n);
	cout<<ans;
	return 0;
}
