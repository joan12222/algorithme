#include<bits/stdc++.h>
using namespace std;
string s;
int n,a[100005],now=-1;
int main(){
	getline(cin,s);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		now+=a[i];
		if(now>=s.size()-1) now=s.size()-2;
		if(s[now]=='>'&&s[now+1]=='>'&&s[now+2]=='>'){
			while(s[now]=='>') now++;
		}else if(s[now]=='*'&&s[now+1]=='*'&&s[now+2]=='*'){
			int num=0;
			while(s[now+num]=='*') num++;
			now-=num;
		}
		if(now<0) now=0;
		if(now>=s.size()-1) now=s.size()-2;
	}
	cout<<now+1<<" "<<s.size()-now-2;
	return 0;
}
