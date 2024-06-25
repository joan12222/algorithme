#include<bits/stdc++.h>
using namespace std;
int n,a[200005],idx[200005];
vector<pair<int,int> > ans;
map<pair<int,int>,int> mp;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		idx[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		if(idx[i]==i) continue;
		int num=a[idx[i]];
		int minn=min(i,idx[i]);
		int maxx=max(i,idx[i]);
		if(mp.count({minn,maxx})==0) ans.push_back({minn,maxx}),mp[{minn,maxx}]=1;
		swap(idx[i],idx[a[i]]);
		swap(a[i],num);
	}
	//sort(ans.begin(),ans.end());
	cout<<ans.size()<<endl;
	for(auto p:ans){
		cout<<p.first<<" "<<p.second<<endl;
	}
	return 0;
}/*
1 3 4 2 5
1 2 4 3 5
1 2 3 4 5*/
