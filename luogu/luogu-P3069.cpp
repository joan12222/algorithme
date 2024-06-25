#include<bits/stdc++.h>
using namespace std;
int n,k,a[100005],ans;
map<int,int> mp;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	int j=1;
	for(int i=1;i<=n;i++){
		if(i!=1){
			mp[a[i-1]]--;
			if(mp[a[i-1]]==0) mp.erase(a[i-1]);
		}
		int maxx=0;
		while(j<=n&&mp.size()<=k+1){
			mp[a[j]]++;
			maxx=max(maxx,mp[a[j]]);
			j++;
		}
		//cout<<j<<endl;
		ans=max(ans,maxx);
		//cout<<ans<<endl;
	}
	cout<<ans;
	return 0;
}
