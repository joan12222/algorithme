#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>s;
		int vis[30]={0},ans=0;
		for(int i=0;i<n;i++){
			if(vis[s[i]-'a']==0){
				vis[s[i]-'a']=1;
				ans+=n-i;
			}
		}
		cout<<ans<<endl;
	}
}
