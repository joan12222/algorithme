#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,r[200005],c[200005],pre[200005],pre_abs[200005],fir,lst;
ll max1,max2,ans;
int main(){
	cin>>t;
	while(t--){
		memset(pre,0,sizeof(pre));
		memset(pre_abs,0,sizeof(pre_abs));
		max1=max2=ans=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>r[i];
		for(int i=1;i<=n;i++) cin>>c[i];
		for(int i=1;i<=n;i++){
			fir=i;
			if(c[i]<=0) break;
		}
		for(int i=n;i>=1;i--){
			lst=i;
			if(c[i]>=0) break;
		}
		for(int i=1;i<=n;i++) pre[i]=pre[i-1]+c[i];
		for(int i=1;i<=n;i++) pre_abs[i]=pre_abs[i-1]+abs(c[i]);
		for(int i=1;i<fir;i++) max1=max(max1,-c[i]+pre[fir-1]-pre[i]);
		for(int i=lst+1;i<=n;i++) max2=max(max2,c[i]-(pre[i-1]-pre[lst]));
		ans=max1+max2;
		if(fir<=lst) ans+=pre_abs[lst]-pre_abs[fir-1];
		cout<<ans<<endl; 
	}
	return 0;
}
