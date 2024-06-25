#include<bits/stdc++.h>
using namespace std;
int n,t,a[20005],ans;
bool validate(int mid){
	priority_queue<int,vector<int>,greater<int>> tim;
	for(int i=1;i<=mid;i++) tim.push(0);
	for(int i=1;i<=n;i++){
		int num=tim.top();
		tim.pop();
		num+=a[i];
		if(num>t) return false;
		tim.push(num);
	}
	return true;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>t;
	int left=1,right=n;
	while(left<=right){
		int mid=(left+right)/2;
		if(validate(mid)){
			ans=mid;
			right=mid-1;
		}else left=mid+1;
	}
	cout<<ans;
	return 0;
}
