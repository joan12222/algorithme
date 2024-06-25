#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,ka,kb,mid,p[45];
ll a[(1<<20)+5],b[(1<<20)+5],ans;
map<ll,int> mpa,mpb;
void dfs(int i,ll sum){
	if(i==n+1){
		if(sum>0) ans++;
		return;
	}
	dfs(i+1,sum+p[i]);
	dfs(i+1,sum);
}
void dfs1(int i,ll sum,bool flag){
	if(i==mid+1){
		if(flag==false||mpa[sum]==1) return;
		a[++ka]=sum;
		mpa[sum]=1;
		if(sum>0) ans++;
		return;
	}
	//if(last==p[i]) return;
	dfs1(i+1,sum+p[i],true);
	dfs1(i+1,sum,false);
}
void dfs2(int i,ll sum,bool flag){
	if(i==n+1){
		if(flag==false||mpb[sum]==1) return;
		b[++kb]=sum;
		mpb[sum]=1;
		if(sum>0) ans++;
		return;
	}
	//if(last==p[i]) return;
	dfs2(i+1,sum+p[i],true);
	dfs2(i+1,sum,false);
}
bool cmp(ll x,ll y){
	return x>y;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>p[i];
	if(n<=20){
		dfs(1,0);
		cout<<ans;
	}else{
		//sort(p+1,p+n+1);
		mid=n/2;
		dfs1(1,0,false);
		dfs2(mid+1,0,false);
		sort(a+1,a+ka+1,cmp);
		sort(b+1,b+kb+1,cmp);
		for(int i=ka,j=kb;i>=1;i--){
			while(j>0&&a[i]+b[j]<=0) j--;
			ans+=j;
		}
		cout<<ans;
	}
	return 0;
}
