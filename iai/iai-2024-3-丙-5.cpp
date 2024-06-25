#include<bits/stdc++.h>
using namespace std;
int n,x[300005],l[300005],now=1,ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>x[i]>>l[i];
	for(int i=1;i<=n;i++){
		int dx=x[i]-x[i-1],dv=l[i]-now;
		if(dx<=dv){
			now+=dx;
			ans=max(ans,now);
			continue;
		}
		int num=(dx+dv)/2;
		ans=max(ans,now+num);
		now=l[i];
	}
	cout<<ans;
	return 0;
}
/*
10 20
21 22 23 24 25 26 27 *28* 27 27
20 27

10 20
21 22 23 24 25 26 27 28 29 28
20 28

10 20
21 22 21 20 19 18 17 16 15 15
20 15
*/
