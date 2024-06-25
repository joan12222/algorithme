#include<bits/stdc++.h>
using namespace std;
int n,m;
int l[1000005],r[1000005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		l[i]=i-1;
		r[i]=i+1;
	}
	for(int i=1,x;i<=m;i++){
		cin>>x;
		if(l[x]<=0) cout<<"*"<<" ";
		else cout<<l[x]<<" ";
		if(r[x]>n) cout<<"*"<<endl;
		else cout<<r[x]<<endl;
		l[r[x]]=l[x];
		r[l[x]]=r[x];
	}
	return 0;
}
