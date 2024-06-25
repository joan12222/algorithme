#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string s1,s2;
map<int,int> mp[200005];
ll ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s1>>s2;
		int a=s1[0]*26+s1[1];
		int b=s2[0]*26+s2[1];
		ans+=mp[b][a];
		if(a==b) ans-=mp[a][b];
		mp[a][b]++;
	}
	cout<<ans;
	return 0;
}
