#include<bits/stdc++.h>
using namespace std;
int a1,a2,a3,a4,a5,a6,ans=0;
void dec(int s2,int s1){
	if(a2>=s2){
		a2-=s2;
	}else{
		s2-=a2;
		a2=0;
		s1+=s2*4;
	}
	if(a1>=s1){
		a1-=s1;
	}else{
		a1=0;
	}
}
int main(){
	cin>>a1>>a2>>a3>>a4>>a5>>a6;
	ans=a6+a5+a4+a3/4;
	for(int i=1;i<=a5;i++){
		dec(0,11);
	}
	for(int i=1;i<=a4;i++){
		dec(5,0);
	}
	a3=a3%4;
	if(a3>0){
		ans++;
	}
	if(a3==1){
		dec(5,7);
	}else if(a3==2){
		dec(3,6);
	}else if(a3==3){
		dec(1,5);
	}
	ans+=a2/9;
	a2%=9;
	if(a2>0){
		ans++;
		dec(0,26-a2*4);
	}
	ans+=a1/36;
	a1%=36;
	if(a1>0){
		ans++;
	}
	cout<<ans;
	return 0;
}