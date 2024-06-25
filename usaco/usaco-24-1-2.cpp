#include<bits/stdc++.h>
using namespace std;
int n,s,if_tgt[100005],v[100005],vis[100005],ans,dir,k=1;//0Ç° 1ºó 
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>if_tgt[i]>>v[i];
	int now=s;
	while(now>=1&&now<=n){
		if(if_tgt[now]){
			if(v[now]<=k&&vis[now]==0){
				ans++;
				vis[now]=1;
			}
			if(dir==0) now+=k;
			else now-=k;
		}else{
			if(dir==0) dir=1;
			else dir=0;
			k+=v[now];
			if(dir==0) now+=k;
			else now-=k;
		}
	}
	cout<<ans;
	return 0;
}
