#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]>m){
			continue;
		}
		for(int j=1;j<=n;j++){
			if(a[j]>m){
				continue;
			}
			for(int k=1;k<=n;k++){
				if(a[k]>m){
					continue;
				}
				if(a[i]+a[j]+a[k]==m){
					cout<<"Yes";
					return 0;
				}
			}
		}
	}
	cout<<"No";
	return 0;
}
