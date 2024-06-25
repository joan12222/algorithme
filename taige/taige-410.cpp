#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("love.in","r",stdin);
	//freopen("love.out","w",stdout);
	string s;
	int cnt[5]={0};
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]=='l'){
			cnt[1]++;
		}
		if(s[i]=='o'){
			cnt[2]++;
		}
		if(s[i]=='v'){
			cnt[3]++;
		}
		if(s[i]=='w'){
			cnt[3]+=2;
		}
		if(s[i]=='e'){
			cnt[4]++;
		}
	}
	int minn=INT_MAX;
	for(int i=1;i<=4;i++){
		minn=min(minn,cnt[i]);
	}
	cout<<minn;
	return 0;
}