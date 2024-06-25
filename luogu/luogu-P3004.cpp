#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[5005],s[5005],f[2][5005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=n;i++) f[1][i]=a[i];
	for(int len=2;len<=n;len++){
		int cur=len%2;
		int old=1-cur;
		for(int begin=1;begin<=n-len+1;begin++){
			int end=begin+len-1;
			int sum=s[end]-s[begin-1];
			int head=sum-f[old][begin+1];
			int tail=sum-f[old][begin];
			f[cur][begin]=max(head,tail);
		}
	}
	cout<<f[n%2][1];
	return 0;
}
