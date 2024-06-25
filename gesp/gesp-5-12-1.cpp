#include<bits/stdc++.h>
using namespace std;
int n,vis[505],ans;
struct Game{
	int t,r;
}a[505];
bool cmp(Game x,Game y){
	return x.r>y.r;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].t;
	for(int i=1;i<=n;i++) cin>>a[i].r;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int j=a[i].t-1;j>=0;j--){
			if(vis[j]==0){
				vis[j]=1;
				ans+=a[i].r;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
