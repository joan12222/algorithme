#include<bits/stdc++.h>
using namespace std;
int a[100005];
int run[100005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	run[n+1]=run[n+2]=0;
	for(int i=n;i>0;i--){
		run[i]=max(a[i]+run[i+1],2*a[i]+run[i+2]);
	}
	cout<<run[1];
	return 0;
}