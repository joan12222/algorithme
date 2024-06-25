#include<bits/stdc++.h>
using namespace std;
int n;
string s[100005];
bool cmp(string x,string y){
	return x+y>y+x;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i];
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++) cout<<s[i];
	return 0;
}
