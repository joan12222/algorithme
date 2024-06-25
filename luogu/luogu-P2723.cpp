#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll id[105],a[20000005],b[20000005],cnt1,cnt2,n,m1,m2,P,ans;
ll p1[15]={0,2,5,11,17,23,31,41,47,59,67,73,83,97,101};
ll p2[15]={0,3,7,13,19,29,37,43,53,61,71,79,89,101};
int main(){
	cin>>n>>P;
	while(p1[m1+1]<=P) m1++;
	while(p2[m2+1]<=P) m2++;
	a[0]=1;
	while(1){
		ll minn=1e18;
		for(int j=1;j<=m1;j++) minn=min(minn,p1[j]*a[id[j]]);
		if(minn>n) break;
		a[++cnt1]=minn;
		for(int j=1;j<=m1;j++){
			if(p1[j]*a[id[j]]==minn) id[j]++;
		}
	}
	b[0]=1;
	memset(id,0,sizeof(id));
	while(1){
		ll minn=1e18;
		for(int j=1;j<=m2;j++) minn=min(minn,p2[j]*b[id[j]]);
		if(minn>n) break;
		b[++cnt2]=minn;
		for(int j=1;j<=m2;j++){
			if(p2[j]*b[id[j]]==minn) id[j]++;
		}
	}
	int j=cnt2;
	for(int i=0;i<=cnt1;i++){
		while(a[i]*b[j]>n) j--;
		ans+=j+1;
	}
	cout<<ans;
	return 0;
}
