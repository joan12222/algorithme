#include<bits/stdc++.h>
using namespace std;
int n,q,op,u,v,x,a[100005];
int main(){
	cin>>n>>q;
	for(int i=1;i<n;i++){
		cin>>u>>v>>x;
		a[u]^=x;
		a[v]^=x;
	}
	while(q--){
		cin>>op;
		if(op==1){
			cin>>u>>v>>x;
			a[u]^=x;
			a[v]^=x;
		}else{
			cin>>u;
			cout<<a[u]<<endl;
		}
	}
	return 0;
}
