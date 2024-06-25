#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
//                  0,1,2,3,4,5,6,7,8,9
const int cost[10]={6,2,5,5,4,5,6,3,7,6};
bool mem[2000000];
long long cache[2000000];
long long counting_next(int n){
	if(n<0) return 0;
	else if(n==0){
		return 1;//没有布置作业的情况下，只有一种完成任务的做法，就是躺平 
	}else{
		if(mem[n]) return cache[n];
		long long sum=0;
		for(int digit=0;digit<=9;digit++){
			sum+=counting_next(n-cost[digit]);
		}
		mem[n]=true;
		cache[n]=sum%mod;
		return cache[n];
	}
}
long long ans=0;
void counting_first(int n){
	for(int digit=1;digit<=9;digit++){
		ans+=counting_next(n-cost[digit]);
	}
}
int main(){
	int n;
	cin>>n;
	counting_first(n);
	cout<<ans%mod;
	return 0;
}
