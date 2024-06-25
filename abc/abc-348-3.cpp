#include<bits/stdc++.h>
using namespace std;
int n,a,c;
map<int,int> mp;
bool cmp(pair<int,int> x,pair<int,int> y){
	return x.second>y.second;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		if(mp.count(c)==0) mp[c]=a;
		else mp[c]=min(mp[c],a);
	}
	vector<pair<int,int> > b(mp.begin(),mp.end());
	sort(b.begin(),b.end(),cmp);
	cout<<b[0].second;
	return 0;
}
