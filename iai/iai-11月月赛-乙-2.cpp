#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf=2e9;
ll n,m,x[200005],p[200005];
ll pre[200005],ans=inf;
struct Node{
	ll l,idx;
}len[200005];
bool cmp(Node x,Node y){
	return x.l>y.l;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>x[i];
	for(int i=1;i<=m;i++) cin>>p[i];
	sort(p+1,p+n+1);
	for(int i=1;i<=n;i++){
		bool flag=true;
		for(int j=1;j<=m;j++){
			if(p[j]>x[i]){
				len[i].l=x[i]-p[j-1];
				len[i].idx=j;
				flag=false;.
				break;
			}
		}
		if(flag) len[i].l=len[i].idx=0;
	}
	sort(len+1,len+n+1,cmp);
	int first=n+1;
	for(int i=n;i>=0;i--){
		first=i;
		if(len[i].l!=0) break;
	}
	for(int i=1;i<=n;i++) pre[i]=max(pre[i-1],len[len[i].idx].l-len[i].l);
	for(int i=first;i>=0;i--) ans=min(ans,len[i].l*2+pre[i]);
	cout<<ans;
	return 0;
}
