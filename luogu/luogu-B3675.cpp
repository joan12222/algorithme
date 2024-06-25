#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],b[1005][1005];
int ans1[1000005],ans2[1000005],k=0;
double num[1005];
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		double arm=0;
		for(int j=1;j<=m;j++){
			double ave=0;
			for(int k=1;k<=m;k++) ave+=a[i][k];
			ave/=m;
			ave=a[i][j]-ave;
			ave*=ave;
			arm+=ave;
		}
		arm/=m;
		double leg=0;
		for(int j=1;j<=m;j++){
			double ave=0;
			for(int k=1;k<=m;k++) ave+=b[i][k];
			ave/=m;
			ave=b[i][j]-ave;
			ave*=ave;
			leg+=ave;
		}
		leg/=m;
		num[i]=arm+leg;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(num[j]>num[j+1]){
				swap(num[j],num[j+1]);
				k++;
				ans1[k]=j;
				ans2[k]=j+1;
			}
		}
	}
	cout<<k<<endl;
	for(int i=1;i<=k;i++) cout<<ans1[i]<<" "<<ans2[i]<<endl;
	return 0;
}
