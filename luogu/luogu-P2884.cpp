#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005];
bool validate(int num){
	int count=1;
	int now=0;
	for(int i=1;i<=n;i++){
		if(now+a[i]<=num) now+=a[i];
		else{
			count++;
			now=a[i];
		}
	}
	return count<=m;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int left=1,right=0;
	for(int i=1;i<=n;i++){
		left=max(left,a[i]);
		right+=a[i];
	}
	while(left<right){
		int mid=(left+right)/2;
		if(validate(mid)) right=mid;
		else left=mid+1;
	}
	cout<<right;
	return 0;
}
