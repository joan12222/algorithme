#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,a,b,x[5001],y[5001],ans=0;
	cin>>n>>s>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>y[i];
	}
	int num1,num2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(y[j]>y[j+1]){
				swap(x[j],x[j+1]);
				swap(y[j],y[j+1]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a+b>=x[i]&&s>=0){
			s-=y[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}