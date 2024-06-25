#include<bits/stdc++.h>
using namespace std;
int t,n,m,r,s,visfs[105],visxf[105],rmnfs,rmnxf;
struct Cards{
	int hs,ds;
}fs[105],xf[105];
bool cmp(Cards x,Cards y){
	if(x.ds==y.ds) return x.hs<y.hs;
	return x.ds<y.ds;
}
int find0(int s){
	if(s==1){
		for(int i=1;i<=n;i++){
			if(visfs[i]==0) return i;
		}
	}else{
		for(int i=1;i<=n;i++){
			if(visxf[i]==0) return i;
		}
	}
	return 114514;
}
void dfs(int nowhs,int nowds,int nows){
	if(rmnfs==0){
		cout<<"FS wins!";
		return;
	}
	if(rmnxf==0){
		cout<<"FR wins!";
		return;
	}
	if(nows==1){
		for(int i=1;i<=n;i++){
			if(fs[i].hs==nowhs&&fs[i].ds>nowds&&visfs[i]==0){
				visfs[i]=1;
				rmnfs--;
				dfs(fs[i].hs,fs[i].ds,2);
				return;
			}
		}
		int idx=find0(2);
		visxf[idx]=1;
		rmnxf--;
		dfs(xf[idx].hs,xf[idx].ds,1);
		return;
	}else{
		for(int i=1;i<=n;i++){
			if(xf[i].hs==nowhs&&xf[i].ds>nowds&&visxf[i]==0){
				visxf[i]=1;
				rmnxf--;
				dfs(xf[i].hs,xf[i].ds,1);
				return;
			}
		}
		int idx=find0(1);
		visfs[idx]=1;
		rmnfs--;
		dfs(fs[idx].hs,fs[idx].ds,2);
		return;
	}
}
int main(){
	cin>>t;
	while(t--){
		memset(visfs,0,sizeof(visfs));
		memset(visxf,0,sizeof(visxf));
		cin>>n>>m>>r>>s;
		rmnfs=rmnxf=n;
		for(int i=1;i<=n;i++) cin>>fs[i].hs;
		for(int i=1;i<=n;i++) cin>>fs[i].ds;
		for(int i=1;i<=n;i++) cin>>xf[i].hs;
		for(int i=1;i<=n;i++) cin>>xf[i].ds;
		sort(fs+1,fs+n+1,cmp);
		sort(xf+1,xf+n+1,cmp);
		if(s==1){
			visfs[1]=1;
			rmnfs--;
			dfs(fs[1].hs,fs[1].ds,2);
		}else{
			visxf[1]=1;
			rmnxf--;
			dfs(xf[1].hs,xf[1].ds,1);
		}
		cout<<endl;
	}
	return 0;
}
