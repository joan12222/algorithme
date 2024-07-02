#include<bits/stdc++.h>
using namespace std;
int n,a[100005],w[100005];
long long ans;
vector<int> box[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>w[i];
	for(int i=1;i<=n;i++) box[a[i]].push_back(w[i]);
	for(int i=1;i<=n;i++){
		if(box[i].size()==0) continue;
		sort(box[i].begin(),box[i].end());
		//cout<<box[i].size()<<" ";
		for(int j=0;j<box[i].size()-1;j++) 
			ans+=box[i][j];
	}
	cout<<ans;
	return 0;
}
