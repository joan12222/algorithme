#include<bits/stdc++.h>
using namespace std;
int n,num1,num2;
int main(){
	cin>>n;
	for(int i=1,x,y;i<=n;i++){
		cin>>x>>y;
		num1+=x;
		num2+=y;
	}
	if(num1>num2) cout<<"Takahashi";
	else if(num1<num2) cout<<"Aoki";
	else cout<<"Draw";
	return 0;	
}
