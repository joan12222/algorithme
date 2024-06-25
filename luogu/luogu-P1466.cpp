#include<bits/stdc++.h>
using namespace std;
int n,num;
int f[45][2000];
int main(){
	cin>>n;
	num=n*(n+1)/2;
	if(num%2==1){
		cout<<"0";
		return 0;
	}
	num/=2;
	/*
	bucket[0]=0;
	for(int i=1;i<=n;i++){
		for(int j )
		if(bucket[num]==true) ans++;
	}
	cout<<ans;
	*/
	f[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=num*2;j++){
			f[i][j]=f[i-1][j];
			if(j-i>=0) f[i][j]+=f[i-1][j-i];
		}
	}
	cout<<f[n][num];
	return 0;
}
