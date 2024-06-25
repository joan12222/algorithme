#include<bits/stdc++.h>
using namespace std;
struct Goods{
	int x,f,c;
}a[105];
int k,e,n,ans,sum;
bool cmp(Goods x,Goods y){
	return x.c<y.c;
}
int main(){
	//freopen("purchase.in","r",stdin);
	//freopen("purchase.out","w",stdout);
	cin>>k>>e>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].f>>a[i].c;
		a[i].c+=(e-a[i].x);
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(sum+a[i].f>k){
			ans+=(k-sum)*a[i].c;
			break;
		}
		ans+=a[i].f*a[i].c;
		sum+=a[i].f;
	}
	cout<<ans;
	return 0;
}
