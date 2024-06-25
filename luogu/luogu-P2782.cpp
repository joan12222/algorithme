#include<bits/stdc++.h>
using namespace std;
struct Node{
	int l,r;
}a[200005];
int n,f[200005],len=1;
bool cmp(Node x,Node y){
	return x.l<y.l;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].l>>a[i].r;
	sort(a+1,a+n+1,cmp);
	f[1]=a[1].r;
	for(int i=2;i<=n;i++){
		if(a[i].r>f[len]) f[++len]=a[i].r;
		else{
			int pos=lower_bound(f+1,f+len+1,a[i].r)-f;
			f[pos]=a[i].r;
		}
	}
	cout<<len;
	return 0;
}
