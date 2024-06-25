#include<bits/stdc++.h>
using namespace std;
int n,len=1,f[200005];
struct Node{
	int l,r;
}a[200005];
bool cmp(Node x,Node y){
	return x.l<y.l||x.l==y.l&&x.r<y.r;
}
map<int,int> vis;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].l>>a[i].r;
	sort(a+1,a+n+1,cmp);
	f[len]=a[1].r;
	for(int i=2;i<=n;i++){
		if(f[len]<=a[i].r) f[++len]=a[i].r;
		else{
			int pos=upper_bound(f+1,f+len+1,a[i].r)-f;
			f[pos]=a[i].r;
		}
	}
	cout<<len;
	return 0;
}
