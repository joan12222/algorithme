#include<bits/stdc++.h>
using namespace std;
int n,c,a[100005];
bool validate(int x){
	int cnt=1,now=1;
	while(now<n){
		int p=now+1;
		while(a[p]-a[now]<x&&p<=n) p++;
		if(p==n+1) break;
		cnt++;
		now=p;
	}
	return cnt>=c;
}
int main(){
	cin>>n>>c;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int left=1,right=a[n]-a[1];
	while(left<right){
		int mid=(left+right+1)/2;
		if(validate(mid)){
			left=mid;
		}else right=mid-1;
	}
	cout<<right;
	return 0;
}
