#include<bits/stdc++.h>
using namespace std;
int n,b,d,k,ans[70],num=1;
int main(){
	cin>>n>>b>>d;
	k++;
	ans[k]=0;
	while(k<=n){
		bool flag=true;
		for(int i=1;i<=k;i++){
			if(__builtin_popcount(ans[i]^num)<d){
				flag=false;
				break;
			}
		}
		if(flag) ans[++k]=num;
		num++;
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
		if(i%10==0) cout<<endl;
	}
	return 0;
}
