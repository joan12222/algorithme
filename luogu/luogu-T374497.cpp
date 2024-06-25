#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s,standard="luogu";
int ans[6],k=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>s;
	for(int i=0;i<s.size();i++){
		if('A'<=s[i]&&s[i]<'Z') s[i]+=32;
		if(s[i]==standard[k]){
			ans[++k]=i;
		}
		if(k==5) break;
	}
	for(int i=1;i<=5;i++) cout<<ans[i]+1<<" ";
	return 0;
}
