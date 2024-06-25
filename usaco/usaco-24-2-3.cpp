#include<bits/stdc++.h>
using namespace std;
int n,q,c[200005],t[200005],bucket[1000005],suf[1000005],s,v;
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>c[i];
	for(int i=1;i<=n;i++) cin>>t[i];
	for(int i=1;i<=n;i++){
		if(c[i]-t[i]>0) bucket[c[i]-t[i]]++;
	}
	for(int i=1000000;i>=1;i--) suf[i]=suf[i+1]+bucket[i];
	while(q--){
		cin>>v>>s;
		if(suf[s+1]>=v) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
