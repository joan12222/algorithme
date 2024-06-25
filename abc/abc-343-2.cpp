#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int x;
			cin>>x;
			if(x==1) cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
