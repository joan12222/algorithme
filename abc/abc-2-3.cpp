#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,S,a[100005];
ll sum[100005],f[10005][10005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		S+=a[i];
		sum[i]=sum[i-1]+a[i];
	}
	memset(f,0x3f,sizeof(f));
	f[0][0]=0;
	int num=S/n;
	if(num*n>S) num--;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			ll p=sum[i+1]-j*(num+1)-(i-j)*num;
			f[i+1][j]=min(f[i+1][j],f[i][j]+abs(p-num));
			f[i+1][j+1]=min(f[i+1][j+1],f[i][j]+abs(p-(num+1)));
		}
	}
	cout<<f[n][S-num*n];
	return 0;
}
