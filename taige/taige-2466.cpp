#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("word.in","r",stdin);
	freopen("word.out","w",stdout);
	string s;
	cin>>s;
	int cnt[30]={0};
	int a=s.size();
	for(int i=0;i<a;i++){
		for(int j=i+1;j<=min(a,i+100);j++){
			memset(cnt,0,sizeof(cnt));
			for(int k=i;k<=j;k++){
				cnt[s[k]-'a']++;
			}
			int maxx=INT_MIN;
			for(int k=0;k<26;k++){
				maxx=max(maxx,cnt[k]);
			}
			if(maxx>(j-i+1)/2){
				cout<<i+1<<" "<<j+1;
				return 0;
			}
		}
	}
	cout<<"-1 -1";
	return 0;
}