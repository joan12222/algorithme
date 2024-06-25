#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int len=n-m;
//	int a[1000]={0},b[1000]={0},d[1001]={0};
	int a[1000],b[1000],d[1001];

	string c[1000];
	
	c[1]='1',c[2]='2';
	for(int i=3;i<=len;i++){
		for(int j=0;j<c[i-1].size();j++){
			a[c[i-1].size()-j]=c[i-1][j]-'0';
		}
		for(int j=0;j<c[i-2].size();j++){
			b[c[i-2].size()-j]=c[i-2][j]-'0';
		}
		int lenc=max(c[i-1].size(),c[i-2].size())+1;
		for(int j=1;j<=lenc;j++){
			d[j]=a[j]+b[j];
		}
		for(int j=0;j<lenc;j++){
			d[j+1]+=d[j]/10;
			d[j]%=10;
		}
		while(lenc>1&&d[lenc]==0){
			lenc--;
		}
		for(int j=lenc;j>0;j--){
			c[i]+=d[j]+'0';
		}
	}
	cout<<c[len];
	return 0;
}