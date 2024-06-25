#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	bool flag=false;
	if(s1.size()<s2.size()||s1.size()==s2.size()&&s1<s2){
		string temp=s1;
		s1=s2;
		s2=temp;
		flag=true;
	}
	int a[1005]={0},b[1005]={0},c[1005]={0};
	for(int i=s1.size()-1;i>=0;i--){
		a[i]=s1[s1.size()-i-1]-'0';
	}
	for(int i=s2.size()-1;i>=0;i--){
		b[i]=s2[s2.size()-i-1]-'0';
	}
	int len=max(s1.size(),s2.size());
	for(int i=0;i<len;i++){
		c[i]=a[i]-b[i];
	}
	for(int i=0;i<len-1;i++){
		if(c[i]<0){
			c[i+1]-=1;
			c[i]+=10;
		}
	}
	/*int index=-1;
	for(int i=len-1;i>=0;i--){
		if(c[i]!=0&&index==-1){
			index=i;
		}
	}
	if(index==-1){
		cout<<"0";
		return 0;
	}
*/	
	while(c[len-1]==0&&len>1){
		len--;
	}
	if(flag){
		cout<<'-';
	}
	for(int i=len-1;i>=0;i--){
		cout<<c[i];
	}
	return 0;
}