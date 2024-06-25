#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll month,day[105],pre[105];
ll sum=0;
int main(){
	pre[0]=0;
	cin>>month;
	for(int i=1;i<=month;i++){
		cin>>day[i];
		sum+=day[i];
		pre[i]=pre[i-1]+day[i];
	}
	ll mid=(sum+1)/2;
	for(int i=1;i<=month;i++){
		if(pre[i]>=mid){
			cout<<i<<" "<<mid-pre[i-1];
			return 0;
		}
	}
	return 0;
}
