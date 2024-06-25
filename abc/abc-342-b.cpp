#include<bits/stdc++.h>
using namespace std;
int n,q,a[105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>q;
	while(q--){
		int x,y;
		cin>>x>>y;
		for(int i=1;i<=n;i++){
			if(a[i]==x){
				cout<<x<<endl;
				break;
			}
			if(a[i]==y){
				cout<<y<<endl;
				break;
			}
		}
	}
	return 0;
}
