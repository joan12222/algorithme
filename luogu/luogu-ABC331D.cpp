#include<iostream>
using namespace std;
#define ll long long
int n,q;
int a[2005][2005],x1,x2,y1,y2;
ll s[2005][2005];
ll sum(ll x,ll y){
	ll num1=(x/n)*(y/n);//��������������pattern���� 
	ll area1=s[n][n];//��������������pattern��� 
	ll num2=y/n;//�������в�������pattern����
	ll area2=s[x%n][n]; //�������в�������pattern����
	ll num3=x/n;//�в�������������pattern����
	ll area3=s[n][y%n];//�в�������������pattern����
	ll num4=1;//�в������в�������pattern����
	ll area4=s[x%n][y%n];//�в������в�������pattern����
	return num1*area1+num2*area2+num3*area3+num4*area4;
}
int main(){
	cin>>n>>q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char c;
			cin>>c;
			if(c=='B') a[i][j]=1;
			else a[i][j]=0;
		}
	}
	/*
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=1000;j++) a[i][j]=a[i%n][j%n];
	}
	*/
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++) s[i+1][j+1]=s[i+1][j]+s[i][j+1]-s[i][j]+a[i][j];
	}
	while(q--){
		cin>>x1>>y1>>x2>>y2;
		//cout<<sum[x2+1][y2+1]-sum[x2+1][y1]-sum[x1][y2+1]+sum[x1][y1]<<endl;
		cout<<sum(x2+1,y2+1)-sum(x2+1,y1)-sum(x1,y2+1)+sum(x1,y1)<<endl;
	}
	return 0;
}
