#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[1000005],bucket[1000005],maxx,ans;
ll num[1000005];
bool validate(int mid){
	queue<int> q;
	memset(num,0,sizeof(num));
	ll sum=0;
	for(int i=1;i<=n;i++){
		sum-=q.size();
		if(!q.empty()&&i-q.front()>=mid) q.pop();
		if(bucket[i]==1){
			sum+=mid;
			q.push(i);
		}
		num[i]+=sum;
	}
	while(!q.empty()) q.pop();
	sum=0;
	for(int i=n;i>=1;i--){
		sum-=q.size();
		if(!q.empty()&&q.front()-i>=mid) q.pop();
		if(bucket[i]==1){
			sum+=mid;
			q.push(i);
		}
		num[i]+=sum;
		if(bucket[i]==1) num[i]-=mid;
	}
	for(int i=1;i<=n;i++){
		if(num[i]<a[i]) return false;
	}
	return true;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	for(int i=1,x;i<=m;i++){
		cin>>x;
		bucket[x]=1;
	}
	int left=0,right=maxx+n;
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
