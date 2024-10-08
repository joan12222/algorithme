#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,cnt1[105],cnt2[105],max1,max2,tmp1[105],tmp2[105];
void solve(){
	for(int i=1;i<=100;i++){
		tmp1[i]=cnt1[i];
		tmp2[i]=cnt2[i];
	}
	int l=0,r=max2,ans=0;
	while(1){
		while(tmp1[l]==0&&l<=max1) l++;
		if(l>max1) break;
		while(tmp2[r]==0) r--;
		cout<<l<<" "<<r<<endl;
		int minn=min(tmp1[l],tmp2[r]);
		tmp1[l]-=minn;
		tmp2[r]-=minn;
		ans=max(ans,l+r);
	}
	cout<<ans<<endl;
}
int main(){
	//freopen("stone.in","r",stdin);
	//freopen("stone.out","w",stdout);
	cin>>n;
	int x,y;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		cnt1[x]++;
		cnt1[y]++;
		max1=max(max1,x);
		max2=max(max2,y);
		//cout<<max1<<" "<<max2<<endl;
		solve();
	}
	return 0;
}
