#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;
int main(){
	cin>>n>>x>>y>>z;
	if(x<y){
		if(z>x&&z<y) cout<<"Yes";
		else cout<<"No";
	}else{
		if(z>y&&z<x) cout<<"Yes";
		else cout<<"No";
	}
	return 0;
}
