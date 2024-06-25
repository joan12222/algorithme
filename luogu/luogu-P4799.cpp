#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,ka,kb,mid;
ll m,ans,p[45],f[1000005],a[(1<<20)+5],b[(1<<20)+5];
void dfs(int i,ll sum){
	if(i==n+1){
		if(sum<=m) ans++;
		return;
	}
	dfs(i+1,sum+p[i]);
	dfs(i+1,sum);
}
void dfs1(int i,ll sum){
	if(sum>m) return;
	if(i==mid+1){
		a[++ka]=sum;
		return;
	}
	dfs1(i+1,sum+p[i]);
	dfs1(i+1,sum);
}
void dfs2(int i,ll sum){
	if(sum>m) return;
	if(i==n+1){
		b[++kb]=sum;
		return;
	}
	dfs2(i+1,sum+p[i]);
	dfs2(i+1,sum);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>p[i];
	if(n<=20){
		dfs(1,0);
		cout<<ans;
	}else if(m<=1e6){
		f[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=m;j>=p[i];j--) f[j]+=f[j-p[i]];
		}
		for(int i=0;i<=m;i++) ans+=f[i];
		cout<<ans;
	}else{
		mid=n/2;
		dfs1(1,0);
		dfs2(mid+1,0);
		sort(a+1,a+ka+1);
		sort(b+1,b+kb+1);
		for(int i=1,j=kb;i<=ka;i++){
			while(j>0&&a[i]+b[j]>m) j--;
			ans+=j;
		}
		cout<<ans;
	}
	return 0;
}
