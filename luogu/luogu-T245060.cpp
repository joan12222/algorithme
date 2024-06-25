#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
	cin>>a>>b;
	if(a>b){
		cout<<"Error!";
		return 0;
	}
	for(int i=a;i<=b;i++) cout<<i<<endl;
	return 0;
}
