#include<bits/stdc++.h>
using namespace std;
int n,k,x1,x2,y11,y2,s[1005][1005],ans;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x1>>y11>>x2>>y2;
		s[x1+1][y11+1]++;
		s[x2+1][y2+1]++;
		s[x1+1][y2+1]--;
		s[x2+1][y11+1]--;
	}
	for(int i=1;i<=1000;i++){
		for(int j=1;j<=1000;j++){
			s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
			if(s[i][j]==k) ans++;
		}
	}
	cout<<ans;
	return 0;
}
