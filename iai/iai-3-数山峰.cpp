#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	int s,t;
}a[100005];
bool cmp(Node x,Node y){
	if(x.s==y.s) return x.t>y.t;
	else return x.s<y.s;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		a[i].s=x-y;
		a[i].t=x+y;
	}
	sort(a+1,a+n+1,cmp);
	int ans=0;
	int maxx=-1;
	for(int i=1;i<=n;i++){
		if(a[i].t>maxx){
			ans++;
			maxx=a[i].t;
		}
	}
	cout<<ans;
	return 0;
}
