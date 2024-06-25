#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string ss="";
	cin>>n;
	int number=n;
	if(n%2==1){
		cout<<"-1";
		return 0;
	}else{
		while(number!=0){
			int x=number%2;
			number/=2;
			if(x<10){
				ss+=x+'0';
			}else{
				ss+=x+55;
			}
		}
		//6
		//011
		for(int i=ss.size()-1;i>=0;i--){
			if(ss[i]!='0'){
				cout<<pow(2,i)<<" ";
			}
		}
	}
	return 0;
}