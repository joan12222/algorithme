#include<bits/stdc++.h>
using namespace std;
string s;
int bucket[30],sum,now;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(bucket[s[i]-'a'+1]==0) sum++;
		bucket[s[i]-'a'+1]++;
	}
	for(int i=1;i<=100;i++){
		if(now==sum) break;
		int num=0;
		for(int j=1;j<=26;j++){
			if(bucket[j]==i) num++;
		}
		if(num!=0&&num!=2){
			cout<<"No";
			return 0;
		}
		now+=num;
	}
	cout<<"Yes";
	return 0;
}
