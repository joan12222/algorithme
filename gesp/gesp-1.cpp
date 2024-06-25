#include<bits/stdc++.h>
using namespace std;
int t,sum;
string s;
int calc(string num){
	int numsum=0;
	for(int i=0;i<num.size();i++) numsum+=num[i]-'0';
	if(numsum<=9) return numsum;
	return calc(to_string(numsum));
}
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		for(int i=0;i<s.size();i++){
			if((i+1)%2==0){
				sum+=s[i]-'0';
				continue;
			}
			int num=(s[i]-'0')*7;
			sum+=calc(to_string(num));
		}
		if(sum%8==0) cout<<"T"<<endl;
		else cout<<"F"<<endl;
	}
	return 0;
}
