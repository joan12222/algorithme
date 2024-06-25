#include<bits/stdc++.h> 
using namespace std;
int	n,w,t,a[605],sum=0;
int main(){
	freopen("live.in","r",stdin);
	freopen("live.out","w",stdout);
    cin>>n>>w;
    for(int i=1;i<=n;i++){
    	cin>>t;
    	a[t]++;
    	sum=0;
    	for(int j=600;j>=0;j--){
    		sum+=a[j];
    		if(sum>=max(1,i*w/100)){
    			cout<<j<<" ";
    			break;
			}
		}
	}
    return 0;
}
