#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
ll buy,sell,a[200005],b[200005];
int main(){
	cin>>sell>>buy;
	for(int i=1;i<=sell;i++) cin>>a[i];
	for(int i=1;i<=buy;i++) cin>>b[i];
	sort(a+1, a+n+1);
	sort(b+1, b+n+1); 
	ll sell_min=1e9+1,buy_max=-1;
	for(int i=1;i<=sell;i++) sell_min=min(sell_min,a[i]);
	for(int i=1;i<=buy;i++) buy_max=max(buy_max,b[i]);
	ll minn=min(sell_min,buy_max);
	ll maxx=max(sell_min,buy_max);
	for(int i=minn;i<=maxx;i++){
		int want_sell=0,want_buy=0;
		for(int j=1;j<=sell;j++){
			if(i>=a[j]) want_sell++;
		}
		for(int j=1;j<=buy;j++){
			if(i<=b[j]) want_buy++;
		}
		if(want_sell>=want_buy){
			cout<<i;
			return 0;
		}
	}
	return 0;
} 
