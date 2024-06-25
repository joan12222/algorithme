#include<bits/stdc++.h>
using namespace std;
int lowbit(int x){
	int number=x;
	string ss="";
	while(number!=0){
		int y=number%2;
		number/=2;
		ss+=y+'0';
	}

	for(int i=0;i<ss.size();i++){
		if(ss[i]!='0'){
			return pow(2,i);
		}
	}
}
int main(){
	int n;
	cin>>n;
	cout<<lowbit(n);
	return 0;
}