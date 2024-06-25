#include<bits/stdc++.h>
using namespace std;
const int base=2;
int a,b,ans[2000005],f[2000005],k;
map<int,bool> mp;
int main(){
	cin>>a>>b;
	cout<<"0.";
	while(a>0&&f[a]==0){
		ans[++k]=a*base/b;
		f[a]=k;
		a=a*base%b;
	}
	if(a==0){
		for(int i=1;i<=k;i++) cout<<ans[i];
	}else{
		for(int i=1;i<f[a];i++) cout<<ans[i];
		cout<<"(";
		for(int i=f[a];i<=k;i++) cout<<ans[i];
		cout<<")";
	}
	return 0;
}
