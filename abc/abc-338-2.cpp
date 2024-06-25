#include<bits/stdc++.h>
using namespace std;
string s;
int cnt[30],maxx;
char ans;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++) cnt[s[i]-'a'+1]++;
	for(int i=1;i<=26;i++){
		if(cnt[i]>maxx){
			maxx=cnt[i];
			ans=i+'a'-1;
		}
	}
	cout<<ans;
	return 0;
}
