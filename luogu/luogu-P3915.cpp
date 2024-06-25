#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1,x,y;i<n;i++){
			cin>>x>>y;
		}
		if(t%2==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
