#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,x;
int flag[10001005];
int ans[10001005],k=0;
bool get7(ll x){
	string s=to_string(x);
	for(int i=0;i<s.size();i++){
		if(s[i]=='7') return true;
	}
	return false;
}
void makeflag(){
	for(int i=1;i<=10001000;i++){
		if(flag[i]==0){
			if(get7(i)==false){
				flag[i]=++k;
				ans[k]=i;
			}else{
				for(int j=1;j<=10001000/i;j++) flag[i*j]=-1;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	makeflag();
	while(t--){
		cin>>x;
		if(flag[x]==-1) cout<<"-1"<<endl;
		else cout<<ans[flag[x]+1]<<endl;
	}
	return 0;
}
