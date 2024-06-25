#include<bits/stdc++.h>
using namespace std;
int n,lasti,lastj,lastk;
int main(){
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			for(int k=0;k<=n;k++){
				if(i+j+k<=n&&((i>=lasti)||(i==lasti&&j>=lastj)||(i==lasti&&j==lastj&&k>=lastk))) cout<<i<<" "<<j<<" "<<k<<endl;
			}
		}
	}
	return 0;
}
