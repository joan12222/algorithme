#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
