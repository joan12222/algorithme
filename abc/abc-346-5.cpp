#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Oprtn{
	ll t,n,x;
}a[200005];
ll h,w,m,sum;
map<ll,ll> ans,hmp,wmp;
int main(){
	cin>>h>>w>>m;
	for(int i=1;i<=m;i++) cin>>a[i].t>>a[i].n>>a[i].x;
	ans[0]+=h*w;
	for(int i=m;i>=1;i--){
		if(a[i].t==1){
			if(!hmp.count(a[i].n)){
				ans[a[i].x]+=w-wmp.size();
				if(ans[a[i].x]<=0) ans.erase(a[i].x);
				hmp[a[i].n]=1;
			}
		}else{
			if(!wmp.count(a[i].n)){
				ans[a[i].x]+=h-hmp.size();
				if(ans[a[i].x]<=0) ans.erase(a[i].x);
				wmp[a[i].n]=1;
			}
		}
	}
	vector<pair<ll,ll> > op(ans.begin(),ans.end());
	sort(op.begin(),op.end());
	for(int i=1;i<op.size();i++) sum+=op[i].second;
	int num=op.size();
	if(sum==h*w) num--;
	cout<<num<<endl;
	for(int i=0;i<op.size();i++){
		if(i==0){
			if(sum!=h*w) cout<<op[i].first<<" "<<h*w-sum<<endl;	
		}
		else cout<<op[i].first<<" "<<op[i].second<<endl;
	}
	return 0;
}
