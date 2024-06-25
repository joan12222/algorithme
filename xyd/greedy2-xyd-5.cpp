#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,v[10001],t[10001];
	double minn;
	while(cin>>n&&n!=0){
		minn=99999;
		for(int i=1;i<=n;i++){
			cin>>v[i]>>t[i];
			if(t[i]>=0){
				if(minn>4.5/v[i]*3600+t[i]){
					minn=4.5/v[i]*3600+t[i];
				}
			}
		}
		cout<<ceil(minn)<<endl;
	}
	return 0;
}