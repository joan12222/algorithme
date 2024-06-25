#include<bits/stdc++.h>
using namespace std;
int n,a[105],flag[105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=max(i,j)+1;k<=n;k++){
				if(a[i]+a[j]==a[k]&&flag[k]==0){
					ans++;
					flag[k]=1;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
