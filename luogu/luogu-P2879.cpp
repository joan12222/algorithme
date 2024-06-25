#include<bits/stdc++.h>
using namespace std;
int n,p,h,m,a,b,c[10005];
map<pair<int,int>,bool> flag;
int main(){
	cin>>n>>p>>h>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		if(a>b) swap(a,b);
		if(flag[{a,b}]) continue;
		flag[{a,b}]=1;
		for(int i=a+1;i<=b-1;i++) c[i]--;
	}
	for(int i=1;i<=n;i++) cout<<c[i]+h<<endl;
	return 0;
}
