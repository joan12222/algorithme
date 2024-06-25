#include<bits/stdc++.h>
using namespace std;
int m;
vector<int> dp[30];
int f[30]={0};
struct Answer{
	int age,num;
}ans[30]={0};
int F(int k,int age){
	if(f[age]) return f[age];
	f[age]=1;
	for(int i=0;i<dp[age].size();i++){
		f[age]=max(f[age],F(k+1,dp[age][i])+1);
	}
	ans[age].age=age;
	ans[age].num=k;
	return f[age];
}
bool cmp(Answer x,Answer y){
	return x.age<y.age;
}
int main(){
	freopen("timemachine.in","r",stdin);
	freopen("timemachine.out","w",stdout);
	cin>>m;
	int a,b;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		dp[a].push_back(b);
	}
	int op=F(0,24)-1;
	if(op==0){
		cout<<"impossible";
		return 0;
	}
	sort(ans+1,ans+m+1,cmp);
	for(int i=1;i<24;i++){
		if(ans[i].age!=0) cout<<ans[i].age<<" "<<ans[i].num<<endl;
	}
	return 0;
} 
