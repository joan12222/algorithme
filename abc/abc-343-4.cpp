#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,t,x,y;
ll a[200005];
map<ll,int> mp;
int main(){
	cin>>n>>t;
	mp[0]=n;
	while(t--){
		cin>>x>>y;
		mp[a[x]]--;
		if(mp[a[x]]==0) mp.erase(a[x]);
		a[x]+=y;
		mp[a[x]]++;
		cout<<mp.size()<<endl;
	}
	return 0;
}
