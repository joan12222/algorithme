#include<bits/stdc++.h>
using namespace std;
int n,k,p[200005],idx[200005],ans=2e9;
set<int> s;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>p[i];
		idx[p[i]]=i;
	}
	for(int i=1;i<=k;i++) s.insert(idx[i]);
	for(int i=1;i<=n-k+1;i++){
		auto e=s.end();
		e--;
		ans=min(ans,*e-*s.begin());
		s.erase(idx[i]);
		s.insert(idx[i+k]);
	}
	cout<<ans;
	return 0;
}
