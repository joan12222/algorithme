#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	int f,s;
}a[300005];
bool cmp(Node x,Node y){
	return x.s>y.s;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].f>>a[i].s;
	sort(a+1,a+n+1,cmp);
	int maxx=-1;
	for(int i=2;i<=n;i++){
		if(a[i].f==a[1].f) maxx=max(maxx,max(a[i].s,a[1].s)+min(a[i].s,a[1].s)/2);
		else maxx=max(maxx,a[i].s+a[1].s);
	}
	cout<<maxx;
	return 0;
}
