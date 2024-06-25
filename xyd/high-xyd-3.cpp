#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s[21];
	int len[21];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		len[i]=s[i].size();
	}
	string ans="-1";
	int j;
	for(int i=1;i<=n;i++){
		if(len[i]>ans.size()||len[i]==ans.size()&&s[i]>ans){
			ans=s[i];
			j=i;
		}
	}
	cout<<j<<endl<<ans;
	return 0;
}