#include<bits/stdc++.h>
using namespace std;
int n,t,a[10],b[10],num,num1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		num+=100/a[i]*b[i];
	}
	cin>>t;
	if(num>=t){
		cout<<"Already Au.";
		return 0;
	}
	num1=num;
	for(int i=1;i<=n;i++){
		bool flag=false;
		for(int j=b[i]+1;j<=a[i];j++){
			num+=100/a[i];
			if(num>=t){
				cout<<j-b[i]<<endl;
				flag=true;
				break;
			}
		}
		if(flag==false) cout<<"NaN"<<endl;
		num=num1;
	}
	return 0;
}
