#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
ll d[200005],best=1e18;
/*
int nxt(int x){
	x++;
	if(x>n) x-=n;
	return x;
}
*/
int main(){
	cin>>n>>m;
	ll begin,end;
	cin>>begin;
	m--;
	while(m--){
		cin>>end;
		if(begin<=end){
			d[1]+=end-begin;
			//for(int x=begin;x!=end;x=nxt(x)) c[x]+=n-end+begin;
			d[begin]+=n-(end-begin);
			d[end]-=n-(end-begin);
			//for(int x=end;x!=begin;x=nxt(x)) c[x]+=end-begin;
			d[end]+=end-begin;
			d[begin]-=end-begin;
		}else{
			d[1]+=begin-end;
			//for(int x=begin;x!=end;x=nxt(x)) c[x]+=begin-end;
			d[begin]+=begin-end;
			d[end]-=begin-end;
			//for(int x=end;x!=begin;x=nxt(x)) c[x]+=n-begin+end;
			d[end]+=n-(begin-end);
			d[begin]-=n-(begin-end);
		}
		begin=end;
	}
	for(int i=1;i<=n;i++){
		d[i]+=d[i-1];
		best=min(best,d[i]);
	}
	cout<<best;
	return 0;
}
