#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n,k;
int a[9][9];
int main(){
	scanf("%d",&t);
	a[0][0]=1;
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++) a[i][j]=j*a[i-1][j]+a[i-1][j-1];
	}
	while(t--){
		scanf("%d%d",&n,&k);
		int cnt=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) cnt++;
			while(n%i==0) n/=i;
		}
		if(n>1) cnt++;
		if(k>cnt) printf("0\n");
		else printf("%d\n",a[cnt][k]);
	}
	return 0;
} 
