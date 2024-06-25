#include<bits/stdc++.h>
using namespace std;
int n;
char a[105][105],b[105][105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>b[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]!=b[i][j]){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}
	return 0;
}
