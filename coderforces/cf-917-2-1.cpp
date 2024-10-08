#include<bits/stdc++.h>
using namespace std;
int t,n,a[105];
int main() {
	cin>>t;
	while(t--){
		cin>>n;
		bool flag=false;
		int sgn=1;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++){
			if(a[i]<0) sgn=1-sgn;
			else if(a[i]==0){
				cout<<"0"<<endl;
				flag=true;
				break;
			}
		}
		if(flag) continue;
		if(sgn==1){
			cout<<"1"<<endl<<"1 0"<<endl;
		}else cout<<"0"<<endl;
	}
	return 0;
}

