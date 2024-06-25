#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,q,a[1005][1005];
ll s[1005][1005];
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			char c;
			cin>>c;
			if(c=='B') a[i][j]++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
	}
	while(q--){
		
	}
	return 0;
}
/*
1 1 2 4 4
1 2 4 8 12
10 10 8 0 0
*/
