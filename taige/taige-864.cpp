#include<bits/stdc++.h>
using namespace std;
int n,t[200005],s[200005],ans[200005]={0};
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i];
	}
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(t[j]<t[i]&&s[j]>s[i]){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
