#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
	int x,y,val;
}a[100005];
int n,k,enemy[100005];
ll f[100005];
ll ans;
bool cmp(Node x,Node y){
	return x.val>y.val;
}
int finds(int x){
	if(x==f[x]) return x;
	return finds(f[x]);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>k;
	for(int i=1,x;i<=k;i++){
		cin>>x;
		enemy[x]=1;
	}
	for(int i=1;i<n;i++){
		cin>>a[i].x>>a[i].y>>a[i].val;
		ans+=a[i].val;
		f[i]=i;
	}
	f[n]=n;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<n;i++){
		int ind1=finds(a[i].x),ind2=finds(a[i].y);
		if(enemy[ind1]&&enemy[ind2]) continue;
		f[ind1]=ind2;
		ans-=a[i].val;
		enemy[ind1]=enemy[ind2]=enemy[ind1]|enemy[ind2];
	}
	cout<<ans;
	return 0;
}
