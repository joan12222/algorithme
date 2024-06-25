#include<bits/stdc++.h>
using namespace std;
int n,len=1,f[5005];
struct Node{
	int l,w;
}a[5005];
bool cmp(Node x,Node y){
	return x.l>y.l||x.l==y.l&&x.w>y.w;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].l>>a[i].w;
	sort(a+1,a+n+1,cmp);
	f[len]=a[1].w;
	for(int i=2;i<=n;i++){
		if(f[len]<a[i].w) f[++len]=a[i].w;
		else{
			int pos=lower_bound(f+1,f+len+1,a[i].w)-f;
			f[pos]=a[i].w;
		}
	}
	cout<<len-1;
	return 0;
}
