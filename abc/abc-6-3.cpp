#include<bits/stdc++.h>
using namespace std;
int n,q,op;
deque<pair<int,int>> dp;
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++) dp.emplace_back(i,0);
	while(q--){
		cin>>op;
		if(op==1){
			char c;
			cin>>c;
			pair<int,int> pp=dp.front();
			if(c=='U') pp.second++;
			if(c=='D') pp.second--;
			if(c=='L') pp.first--;
			if(c=='R') pp.first++;
			dp.emplace_front(pp);
			dp.pop_back();
		}else{
			int p;
			cin>>p;
			pair<int,int> pp=dp[p-1];
			cout<<pp.first<<" "<<pp.second<<endl;
		}
	}
	return 0;
}
