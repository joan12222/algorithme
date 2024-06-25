#include<bits/stdc++.h>
using namespace std;
int t,yone,n,a[105],ytwo;
int main(){
	cin>>t;
	while(t--){
		cin>>yone>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		cin>>ytwo;
		int ans=0,k=1;
		for(int i=yone;i<=ytwo;i++){
			if(i==a[k]){
				k++;
				continue;
			}
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
