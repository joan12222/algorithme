#include<bits/stdc++.h>
using namespace std;
int n,a[300005],ans=0,num=1;
stack<pair<int,int> > s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int change=0;
		while(!s.empty()&&s.top().second>=a[i]){
			change+=s.top().first;
			if(ans<s.top().second*change){
				ans=s.top().second*change;
				num=1;
			}else if(ans==s.top().second*change) num++;
			s.pop();
		}
		s.push(make_pair(change+1,a[i]));
	}
	cout<<ans<<endl<<num;
	return 0;
}
