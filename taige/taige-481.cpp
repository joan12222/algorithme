#include<bits/stdc++.h>
using namespace std;
int n,a[105],vis[105]={0};
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(i!=j&&j!=k&&i!=k&&a[i]+a[j]==a[k]&&vis[k]==0){
					vis[k]=1;
					ans++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
