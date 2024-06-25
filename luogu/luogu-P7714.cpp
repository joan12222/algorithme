#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n,a[1000005],ans;
int main(){
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int l=1;l<=n;){
			if(a[l]==l) l++;
			else{
				int r=l+1;
				int maxx=a[l];
				maxx=max(maxx,a[r]);
				while(maxx>r){
					r++;
					maxx=max(maxx,a[r]);
				}
				ans+=r-l+1;
				l=r+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
