#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,s[10005];
	int i,d,k;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(i>d){
			s[i]=s[i-d]+x;
		}else{
			s[i]=x;
		}
	}
	while(m--){
		cin>>i>>d>>k;
		if(i>d){
			if(i+(k-1)*d<=n){
				cout<<s[i+(k-1)*d]-s[i-d-1]<<endl;
			}else{
				cout<<s[n]-s[i-d-1]<<endl;
			}
		}else{
			if(i+(k-1)*d<=n){
				cout<<s[i+(k-1)*d]<<endl;
			}else{
				cout<<s[n]<<endl;
			}
		}
	}
	return 0;
}