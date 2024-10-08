#include<bits/stdc++.h>
using namespace std;
int n,fa[305],q,m,p,cnt[305];
void mark(int x){
	cnt[x]++;
	if(x==0) return;
	mark(fa[x]);
}
int main(){
	cin>>n;
	for(int i=1;i<n;i++) cin>>fa[i];
	cin>>q;
	while(q--){
		memset(cnt,0,sizeof(cnt));
		cin>>m;
		for(int i=1;i<=m;i++){
			cin>>p;
			mark(p);
		}
		for(int i=n-1;i>=0;i--){
			if(cnt[i]==m){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
