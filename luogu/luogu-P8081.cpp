#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,k,x;
ll num,a[300005];
deque<ll> q;
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++) q.push_back(a[i]);
	while(m--){
		int op;
		cin>>op;
		if(op==1){
			cin>>x;
			num+=x;
			while(!q.empty()){
				ll now=q.back();
				if(now+num>k) q.pop_back();
				else break;
			}
		}else if(op==2){
			cin>>x;
			num-=x;
			while(!q.empty()){
				ll now=q.front();
				if(now+num<-k) q.pop_front();
				else break;
			}
		}else cout<<q.size()<<endl;
	}
	return 0;
}
