#include<bits/stdc++.h>
using namespace std;
int n,m,x[1005],y[1005];
vector<int> edges[1005];
double ans;
double calc_dis(int xone,int yone,int xtwo,int ytwo){
	return sqrt((xone-xtwo)*(xone-xtwo)+(yone-ytwo)*(yone-ytwo));
}
bool is_connected(int y,int now,int fa){
	if(now==y) return true;
	for(int i=0;i<edges[now].size();i++){
		if(edges[now][i]!=fa) return is_connected(y,edges[now][i],now);
	}
	return false;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
	for(int i=1,x,y;i<=m;i++){
		cin>>x>>y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(is_connected(j,i,0)==false) ans+=calc_dis(x[i],y[i],x[j],y[j]);
		}
	}
	printf("%.2f",ans);
	return 0;
}
