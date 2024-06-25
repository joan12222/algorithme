#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[100005];
ll sum;
int main(){
	cin>>n>>m;
	for(int i=1,l,r;i<=m;i++){
		cin>>l>>r;
		a[l]--;
		a[r+1]++;
	}
	for(int i=1;i<n;i++){
		sum+=a[i];
		if(sum>=0) cout<<i<<" ";
	}
	return 0;
}
