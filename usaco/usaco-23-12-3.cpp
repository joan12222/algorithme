#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n;
struct Node{
	ll h,a,rank;
}a[200005];
bool cmp(Node x,Node y){
	return x.rank<y.rank;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i].h;
		for(int i=1;i<=n;i++) cin>>a[i].a;
		for(int i=1;i<=n;i++) cin>>a[i].rank;
		sort(a+1,a+n+1,cmp);
		ll maxd=2e9,lim=-1;//(0-maxd,lim-inf)
		bool flag=false;//have an answer
		for(int i=2;i<=n;i++){
			if(a[i-1].h==a[i].h){
				if(a[i-1].a<=a[i].a) flag=true;//no answer
				else lim=max(lim,1ll);
			}else if(a[i-1].h>a[i].h){
				if(a[i-1].a>=a[i].a) continue;
				else{
					ll temp=(a[i-1].h-a[i].h)/(a[i].a-a[i-1].a);
					if((a[i-1].h-a[i].h)%(a[i].a-a[i-1].a)==0) maxd=min(maxd,temp-1);
					else maxd=min(maxd,temp);
				}
			}
			if(flag==true) break;
			continue;
		}
		if(flag==true||maxd<lim) cout<<"-1"<<endl;
		else cout<<lim<<endl;
	}
	return 0;
}
