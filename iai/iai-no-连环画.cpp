#include<bits/stdc++.h>
using namespace std;
const int maxn=1000005;
int n,a[maxn],b[maxn];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int trade_able=0;
	int m=1;
	b[1]=a[1];
	for(int i=2;i<=n;i++){
		if(a[i]==a[i-1]) trade_able++;
		else{
			m++;
			b[m]=a[i];
		}
	}
	int ans=0;
	int i=1;
	while(i<=m){
		if(b[i]=ans+1){
			i++;
			ans++;
			trade_able++;
		}else{
			if(trade_able>=2){
				trade_able--;//少2多1=少1 
				ans++;
			}else if(trade_able==1){
				ans++;
				m--;
				//trade_able不变	
			}else{
				if(m-i+1>=2){
					m-=2;
					ans++;
					trade_able++;
				}else{
					break;
				}
			} 
		}
	}
	while(trade_able>=2){
		ans++;
		trade_able--;
	}
	cout<<ans;
	return 0;
}
