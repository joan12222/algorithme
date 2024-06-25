#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[1005],fa[1005];
int findset(int x){
	if(fa[x]==x) return x;
	return findset(fa[x]);
}
void unit(int x,int y){
	int xone=findset(x);
	int yone=findset(y);
	fa[xone]=yone;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n&&n!=0){
		for(int i=1;i<=n;i++) fa[i]=i;
		cin>>m;
		for(int i=1,x,y;i<=m;i++){
			cin>>x>>y;
			unit(x,y);
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			if(findset(i)==i) ans++;
		}
		cout<<ans-1<<endl;
	}
	return 0;
}
