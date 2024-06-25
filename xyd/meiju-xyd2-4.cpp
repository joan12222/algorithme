#include<bits/stdc++.h>
using namespace std;
bool isP(int x,int y){
	if(x==1||y==1){
		return true;
	}else{
		int t=0;
		while(true){
			t=x%y;
			if(t==0){
				break;
			}else{
				x=y;
				y=t;
			}
		}
		if(y>1){
			return false;
		}else{
			return true;
		}
	}
}
int main(){
	int a,b,l,ans1,ans2;
	double sum=INT_MAX;
	cin>>a>>b>>l;
	for(int i=1;i<=l;i++){
		for(int j=1;j<=l;j++){
			if(isP(i,j)==true){
				if(double(i)/j>=double(a)/b&&double(i)/j-double(a)/b<sum){
					sum=double(i)/j-double(a)/b;
					ans1=i,ans2=j;
				}
			}
		}
	}
	cout<<ans1<<" "<<ans2;
	return 0;
}