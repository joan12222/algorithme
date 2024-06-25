#include<bits/stdc++.h>
using namespace std;
int t;
long long a,b,c,d;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		if(a==b&&b==c&&c==d){
			cout<<"square"<<endl;
			continue;
		}
		if(a==b){
			if(c==d) cout<<"rectangle"<<endl;
			else cout<<"no"<<endl;
		}else if(b==c){
			if(a==d) cout<<"rectangle"<<endl;
			else cout<<"no"<<endl;
		}else cout<<"no"<<endl;
	}
	return 0;
}
