#include<bits/stdc++.h>
using namespace std;
struct node{
	int p,t;
}sub[100001],bus[100001];
int n,ans,cnt_sub;
int main(){
	cin>>n;
	while(n--){
		int op,p,t;
		cin>>op>>p>>t;
		if(op==1){
			bool flag=true;
			for(int i=max(0,cnt_sub-45);i<cnt_sub;i++){
				if(p<=sub[i].p&&t<=sub[i].t){
					flag=false;
					sub[i].p=0;
					sub[i].t=0;
					break;
				}
			}
			if(flag){
				ans+=p;
			}
		}else{
			sub[cnt_sub].p=p;
			sub[cnt_sub].t=t;
			sub[cnt_sub].t+=45;
			ans+=p;
			cnt_sub++;
		}
	}
	cout<<ans;
	return 0;
}
