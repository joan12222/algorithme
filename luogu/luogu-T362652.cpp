#include<bits/stdc++.h>
using namespace std;
#define ll long long
int H,T,N,h[55],t[55],v[55];
ll f[405][405];
int main(){
	cin>>H>>T>>N;
	for(int i=1;i<=N;i++) cin>>h[i]>>t[i]>>v[i];
	for(int i=1;i<=N;i++){
		for(int j=H;j>=h[i];j--){
			for(int k=T;k>=t[i];k--){
				f[j][k]=max(f[j][k],f[j-h[i]][k-t[i]]+v[i]);
			}
		}
	}
	cout<<f[H][T];
	return 0;
}
