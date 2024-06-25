#include<bits/stdc++.h>
using namespace std;
int n,q,k;
bool isp[100000005];
int p[10000005]; 
void init(){
	memset(isp,1,sizeof(isp));
	isp[1]=0;
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(isp[i]) p[++cnt]=i;
		for(int j=1;j<=cnt&&i*p[j]<=n;j++){
			isp[i*p[j]]=0;
			if(i%p[j]==0) break;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>q;
	init();
	while(q--){
		cin>>k;
		cout<<p[k]<<endl;
	}
	return 0;
}
