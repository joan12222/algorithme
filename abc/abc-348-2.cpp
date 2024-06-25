#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,x[105],y[105];
double calcdis(ll x1,ll y1,ll x2,ll y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
	for(int i=1;i<=n;i++){
		double maxx=0;
		ll ans;
		for(int j=1;j<=n;j++){
			if(j==i) continue;
			double dis=calcdis(x[i],y[i],x[j],y[j]);
			if(dis>maxx){
				maxx=dis;
				ans=j;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
