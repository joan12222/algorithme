#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t;
ll x1,y1,x2,y2;
int main(){
	cin>>t;
	while(t--){
		cin>>x1>>y1>>x2>>y2;
		if((x1-y1)*(x2-y2)<0) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
	return 0;
}
