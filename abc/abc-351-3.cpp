#include<bits/stdc++.h>
using namespace std;
int n,a[200005],now[200005],ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		now[ans++]=a[i];
		while(ans>1){
			if(now[ans-1]!=now[ans-2]) break;
			now[ans-2]++;
			ans--;
		}
	}
	cout<<ans;
	return 0;
}
