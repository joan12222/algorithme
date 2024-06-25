#include<bits/stdc++.h>
using namespace std;
int t,n,a[100005],b[100005],da[100005],db[100005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		for(int i=1;i<=n;i++) da[i]=a[i]-a[i-1];
		for(int i=1;i<=n;i++) db[i]=b[i]-b[i-1];
		sort(da+1,da+n+1);
		sort(db+1,db+n+1);
		bool flag=true;
		for(int i=1;i<=n;i++){
			if(da[i]!=db[i]){
				cout<<"wuwu"<<endl;
				flag=false;
				break;
			}
		}
		if(flag) cout<<"happy"<<endl;
	}
	return 0;
}
