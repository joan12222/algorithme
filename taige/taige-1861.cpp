#include<bits/stdc++.h>
using namespace std;
int a[2001]={6},n,ans=0,i,j,c[10]={6,2,5,5,4,5,6,3,7,6};
int main(){
	freopen("matches.in","r",stdin);
	freopen("matches.out","w",stdout);
    cin>>n;
    for(i=1;i<2001;i++){
        j=i;
        while(j>=1){
            a[i]+=c[j%10];
            j/=10;
        }
    }
    for(i=0;i<1000;i++){
    	for(j=0;j<1000;j++){
    		if(a[i]+a[j]+a[i+j]+4==n)
                ans++;
		}
	}
    cout<<ans;
    return 0;
}