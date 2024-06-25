#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,len[11];
	string s[11];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		len[i]=s[i].size();
	}
	string minn="";
	for(int i=0; i<100; i++) {
		minn+="9";
	}
	string maxx="";
	for(int i=0;i<n;i++){
		if(len[i]>maxx.size()||len[i]==maxx.size()&&s[i]>maxx){
			maxx=s[i];
		}
		if(len[i]<minn.size()||len[i]==minn.size()&&s[i]<maxx){
			minn=s[i];
		}
	}
	int a[101]={0},b[101]={0},c[101]={0};
	for(int i=maxx.size()-1;i>=0;i--){
		a[i]=maxx[maxx.size()-i-1]-'0';
	}
	for(int i=minn.size()-1;i>=0;i--){
		b[i]=minn[minn.size()-i-1]-'0';
	}
	int len2=max(maxx.size(),minn.size());
	for(int i=0;i<len2;i++){
		c[i]=a[i]-b[i];
	}
	for(int i=0;i<len2-1;i++){
		if(c[i]<0){
			c[i+1]-=1;
			c[i]+=10;
		}
	}
	while(c[len2-1]==0&&len2>1){
		len2--;
	}
	for(int i=len2-1;i>=0;i--){
		cout<<c[i];
	}
	return 0;
}