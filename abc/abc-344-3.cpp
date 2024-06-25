#include<bits/stdc++.h>
using namespace std;
int n,m,l,q,x,a[105],b[105],c[105];
map<int,bool> mp;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++) cin>>b[i];
	cin>>l;
	for(int i=1;i<=l;i++) cin>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=1;k<=l;k++) mp[a[i]+b[j]+c[k]]=true;
		}
	}
	cin>>q;
	while(q--){
		cin>>x;
		if(mp.count(x)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
