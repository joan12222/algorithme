#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000001];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=0,cnt=0;
	for(int i=1;i<=n;i++){
		sum+=a[i];
		if(sum>m){
			cnt++;
			i--;
			sum=0;
			continue;
		}
	}
	cout<<cnt+1;
	return 0;
}