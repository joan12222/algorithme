#include<bits/stdc++.h>
using namespace std;
int N,W;
int w[105],v[105];
int f[1005];
int main(){
	cin>>W>>N;
	for(int i=1;i<=N;i++) cin>>w[i]>>v[i];
	for(int i=1;i<=N;i++){
		for(int j=W;j>=w[i];j--){
			f[j]=max(f[j],f[j-w[i]]+v[i]);
		}
	}
	cout<<f[W];
	return 0;
}
