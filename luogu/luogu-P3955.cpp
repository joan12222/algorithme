#include<bits/stdc++.h>
using namespace std;
int n,q,num[1005];
int op[8]={1,10,100,1000,10000,100000,1000000,10000000};
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>num[i];
	sort(num+1,num+n+1);
	while(q--){
		int len,m;
		cin>>len>>m;
		int a=-1;
		for(int i=1;i<=n;i++){
			int x=num[i]%op[len];
			if(x==m){
				a=num[i];
				break;
			}
		}
		cout<<a<<endl;
	}
	return 0;
} 
