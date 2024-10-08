#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005],above,below;
int main(){
	freopen("gio.in","r",stdin);
	freopen("gio.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		above+=a[i]-1;
		below+=m-a[i];
	}
	cout<<max(1,m-below)<<endl<<min(m,above+1);
	return 0;
}
