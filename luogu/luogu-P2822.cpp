#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll triangle[2010][2010]={0};
ll pre[2010][2010]={0};
int main(){
	int t,k;
	cin>>t>>k;
	triangle[0][0]=1;
	triangle[1][0]=triangle[1][1]=1;
	for(int i=2;i<=2005;i++){
		triangle[i][0]=1;
		for(int j=1;j<=i;j++){
			triangle[i][j]=(triangle[i-1][j-1]%k+triangle[i-1][j]%k)%k;
			pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1];
			if(triangle[i][j]==0) pre[i][j]++;
		}
		pre[i][i+1]=pre[i][i];
	}
	/*
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			cout<<triangle[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	while(t--){
		int n,m;
		cin>>n>>m;
		if(m>n) cout<<pre[n][n]<<endl;
		else cout<<pre[n][m]<<endl;
	}
	return 0;
}
