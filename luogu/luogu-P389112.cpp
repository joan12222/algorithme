#include<bits/stdc++.h>
using namespace std;
int n,m,x;
map<int,int> h;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(h.count(x)==0) h[x]=i;
	}
	while(m--){
		cin>>x;
		if(h.count(x)==0) cout<<"-1 ";
		else cout<<h[x]<<" ";
	}
	return 0;
}
