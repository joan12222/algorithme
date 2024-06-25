#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
	if(s.size()!=n){
		cout<<"error!";
		return 0;
	}
	double ans;
	if((n+1)%2==0){
		ans=int((n+1)/2)+0.5;
	}else{
		ans=int(n/2)+1;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='l'){
			ans-=0.5;
		}else{
			ans+=0.5;
		}
	}
	cout<<int(ans);
	return 0;
}