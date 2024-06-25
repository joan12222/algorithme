#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull n,pow3[1000005];
bool check(string s){
	string s1=s;
	reverse(s.begin(),s.end());
	if(s1==s) return true;
	return false;
}
int main(){
	for(int i=0;i<=1e6;i++) pow3[i]=(unsigned long long)(i)*i*i;
	cin>>n;
	if(n==1){
		cout<<"1";
		return 0;
	}
	int idx=-1;
	for(int i=1;i<1e6;i++){
		if(pow3[i+1]>n){
			//cout<<pow3[i+1]<<endl;
			idx=i;
			break;
		}
	}
	if(idx==-1) idx=1e6;
	//cout<<idx<<endl;
	for(int i=idx;i>=0;i--){
		//if(i==idx) cout<<to_string(pow3[i])<<endl;
		if(check(to_string(pow3[i]))){
			cout<<pow3[i];
			return 0;
		}
	}
	cout<<"1";
	return 0;
} 
