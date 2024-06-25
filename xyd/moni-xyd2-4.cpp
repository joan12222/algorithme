#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,mon[370],day[370];
	mon[0]=1;
	day[0]=0;
	int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>mon[i]>>day[i];
	}
	mon[n+1]=12;
	day[n+1]=32;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(mon[j]>mon[j+1]){
				swap(mon[j],mon[j+1]);
				swap(day[j],day[j+1]);
			}else if(mon[j]==mon[j+1]){
				if(day[j]>day[j+1]){
					swap(mon[j],mon[j+1]);
					swap(day[j],day[j+1]);
				}
			}
		}
	}
	int sum;
	double ans=0;
	for(int i=1;i<=n+1;i++){
		sum=0;
		for(int j=mon[i-1];j<mon[i];j++){
			sum+=a[j];
		}
		sum-=day[i-1];
		sum+=day[i]-1;
		if(sum>ans){
			ans=sum;
		}
	}
	ans=ans/366*24*3600;
	cout<<int(ans+0.5);
	return 0;
}