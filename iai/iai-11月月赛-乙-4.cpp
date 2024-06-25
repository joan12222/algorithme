#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[20],half;
bool check[1<<20];
multimap<ll,int> table;
void gen(int step,ll diff,int set){
	if(step<half){
		int bit=1<<step;
		gen(step+1,diff,set);
		gen(step+1,diff+a[step],set+bit);
		gen(step+1,diff-a[step],set+bit);
	}else table.insert({diff,set});
}
void go(int step,ll diff,int set){
	if(step<n){
		int bit=1<<step;
		go(step+1,diff,set);
		go(step+1,diff+a[step],set+bit);
		go(step+1,diff-a[step],set+bit);
	}else{
		auto begin=table.lower_bound(diff);
		auto end=table.upper_bound(diff);
		while(begin!=end){
			int front=begin->second;
			check[front+set]=true;
			begin++;
		}
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	gen(0,0,0);
	go(half,0,0);
	int ans=0,bound=1<<n;
	for(int set=0;set<bound;set++){
		if(check[set]) ans++;
	}
	cout<<ans;
	return 0;
}
