#include<bits/stdc++.h>
using namespace std;
struct YearPair {
	int start;
	int end;
}a[101];
vector<int> to[25]; 
int ans[25]; 
void dfs(int y, int step) {
	for(int i=0; i<to[y].size(); i++) {
		//已经来过，直接返回 
		if(ans[to[y][i]]==1e9) {
			ans[to[y][i]]=min(ans[to[y][i]],++step);
			dfs(to[y][i], step);
			step--;
		}
	}	
}

int main(){
	int m;
	freopen("timemachine.in","r",stdin);
	freopen("timemachine.out","w",stdout);
	cin>>m;
	for(int i=1;i<=m;i++) {
		cin>>a[i].start>>a[i].end;
		 to[a[i].start].push_back(a[i].end);
	}
	for(int i=1;i<=24;i++) {
		cout<<i<<": ";
		for(int j=0; j<to[i].size(); j++) {
			cout<<to[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=1; i<=24; i++) {
		ans[i]=1e9;
	}
//	memset(ans, INT_MAX, sizeof(ans));
	dfs(24,0);
	bool flag=false;
	for(int i=1; i<=23; i++) {
		if(ans[i]!=1e9) {
			flag = true;
			cout<<i<<" "<<ans[i]<<endl;	
		}
	}
	if(!flag) cout<<"impossible";
	return 0;
} 
