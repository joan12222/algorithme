#include<bits/stdc++.h>
using namespace std;
int n;
long long t;
struct deliveries{
	long long day,bay;
}a[100005]; 
int main(){
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>a[i].day>>a[i].bay;
	}
	a[n+1].day=t+1;
	a[n+1].bay=0LL;
	long long remaining=0LL,total=0LL,last_day=0LL;
	for(int i=1;i<=n+1;i++){
		total+=a[i].bay;
		remaining=remaining-(a[i].day-last_day);
		last_day=a[i].day;
		remaining=max(remaining,0LL)+a[i].bay;
	}
	cout<<total-remaining;
	return 0;
}