#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,q,flag[200005],pre[200005],sz;
struct Node{
	ll x,ans;
}a[200005];
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++) a[i].x=-1;
	for(int i=1;i<=q;i++){
		ll y;
		cin>>y;
		if(flag[y]==0){
			flag[y]=1;
			a[y].x=i;
			sz++;
		}else{
			flag[y]=0;
			a[y].ans+=pre[i-1]-pre[a[y].x-1];
			a[y].x=-1;
			sz--;
		}
		pre[i]=pre[i-1]+sz;
	}
	for(int i=1;i<=n;i++){
		if(a[i].x!=-1) a[i].ans+=pre[q]-pre[a[i].x-1];
	}
	for(int i=1;i<=n;i++) cout<<a[i].ans<<" ";
	return 0;
}
