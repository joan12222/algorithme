#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll d,n,a[170][170],ans,sum,maxx;
int main(){
	cin>>d>>n;
	for(int i=1,x,y,k;i<=n;i++){
		cin>>x>>y>>k;
		a[x+20][y+20]+=k;
	}
	for(int i=20;i<=148;i++){
		for(int j=20;j<=148;j++){
			for(int k=i-d;k<=i+d;k++){
			sum=0;
				for(int w=j-d;w<=j+d;w++) sum+=a[k][w];
			}
			if(maxx==sum) ans++;
			else if(maxx<sum){
				ans=1;
				maxx=sum;
			}
		}
	}
	cout<<ans<<" "<<maxx;
	return 0;
}
