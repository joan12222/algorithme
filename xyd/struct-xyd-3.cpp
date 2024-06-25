#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
struct Data{
	char na[15];
	int ye;
	int gr;
}x[1001];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i].na>>x[i].ye>>x[i].gr;
		if((x[i].gr)*1.2<=400){
			x[i].gr*=1.2;
		}else{
			x[i].gr=400;
		}
		x[i].ye++;
		cout<<x[i].na<<" "<<x[i].ye<<" "<<x[i].gr<<endl;
	}
	return 0;
}