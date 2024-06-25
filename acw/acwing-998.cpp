#include<bits/stdc++.h>
using namespace std;
int n,m,ans,t[100005],op[100005];//1=or 2=xor 3=and
int calc(int bit,int bits){
	for(int i=1;i<=n;i++){
		if(op[i]==1) bit|=(t[i]>>bits)&1;
		else if(op[i]==2) bit^=(t[i]>>bits)&1;
		else bit&=(t[i]>>bits)&1;
	}
	return bit;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s>>t[i];
		if(s=="OR") op[i]=1;
		else if(s=="XOR") op[i]=2;
		else op[i]=3;
	}
	for(int i=29;i>=0;i--){
		if(1<<i<=m){
			int use1=calc(1,i),use0=calc(0,i);
			if(use1<=use0) ans|=use0<<i;
			else{
				ans|=use1<<i;
				m-=1<<i;
			}
		}else ans|=calc(0,i)<<i;
	}
	cout<<ans;
	return 0;
} 
