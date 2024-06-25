#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[10001],num=0,ans=0,last;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(a[i]==0){
    		last=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==2){
			num++;
			if((i-last)%6==0){
				ans+=(i-last)/6;
			}else{
				ans=ans+(i-last)/6+1;
			}
			last=i;
		}
		if(num==m){
			break;
		}
	}
	cout<<ans;
    return 0;
}