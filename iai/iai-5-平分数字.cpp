#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> p;
int main(){
	cin>>n;
	p.push_back({0,0});
	while(n--){
		int x,y;
		cin>>x>>y;
		vector<pair<int,int>> q;
		for(int i=0;i<p.size();i++) q.push_back({p[i].first+x,p[i].second+y});
		vector<pair<int,int>> r;
		int i=0,j=0;
		while(i<p.size()||j<q.size()){
			if(i==p.size()){
				r.push_back(q[j]);
				j++;
			}else if(j==q.size()){
				r.push_back(p[i]);
				i++;
			}else if(p[i].first<q[j].first){
				r.push_back(p[i]);
				i++;
			}else if(p[i].first>q[j].first){
				r.push_back(q[j]);
				j++;
			}else{
				int a=p[i].first;
				int b=max(p[i].second,q[j].second);
				r.push_back({a,b});
				i++;
				j++;
			}
		}
		p=r;
	}
	int ans=0;
	for(int i=0;i<p.size();i++){
		if(p[i].first>=0&&p[i].second>=0) ans=max(ans,p[i].first+p[i].second);
	}
	cout<<ans;
	return 0;
}
