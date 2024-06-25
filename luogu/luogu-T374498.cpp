#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n,m,k,ans[50005];
struct Students_rooms{
	ll num;
	ll idx;
}a[50005],room[50005];
bool cmp(Students_rooms a,Students_rooms b){
	return a.num>b.num;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while(t--){
		ll x,y;
		memset(a,0,sizeof(a));
		memset(ans,0,sizeof(ans));
		cin>>n>>m>>k;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			a[y].num=max(a[y].num,x);
			a[y].idx=y;
		}
		for(int i=1;i<=k;i++){
			cin>>room[i].num;
			room[i].idx=i;
		}
		sort(a+1,a+n+1,cmp);
		sort(room+1,room+k+1,cmp);
		bool flag=false;
		for(int i=1;i<=n;i++){
			if(a[i].num<=room[i].num*2/3) ans[a[i].idx]=room[i].idx;
			else{
				cout<<"-1"<<endl;
				flag=true;
				break;
			}
		}
		if(flag) continue;
		for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}
