#include<bits/stdc++.h>
using namespace std;
int n,x,y,cnt[1000000]={0},ans=0;
int main(){
	//freopen("hellfire.in","r",stdin);
	//freopen("hellfire.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		int ind=double(y)/x*1000;
		cnt[ind]++;
	}
	for(int i=0;i<=100000;i++){
		if(cnt[i]!=0){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}