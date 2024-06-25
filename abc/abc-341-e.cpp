#include<bits/stdc++.h>
using namespace std;
int n,q;
set<int> bad;
int d[500005];
int main(){
	cin>>n>>q;
	char last='!';
	for(int i=1;i<=n;i++){
		char c;
		cin>>c;
		if(c!=last) d[i]=1;
		else{
			d[i]=0;
			bad.insert(i);
		}
		last=c;
	}
	while(q--){
		int cmd,x,y;
		cin>>cmd>>x>>y;
		if(cmd==1){
			if(x>1){
				if(d[x]==0){
					bad.erase(x);
					d[x]=1;
				}else{
					bad.insert(x);
					d[x]=0;
				}
			}
			y++;
			if(y>n) continue;
			if(d[y]==0){
				bad.erase(y);
				d[y]=1;
			}else{
				bad.insert(y);
				d[y]=0;
			}
		}else{
			auto iter=bad.upper_bound(x);
			if(iter==bad.end()||*iter>y) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
	return 0;
}
