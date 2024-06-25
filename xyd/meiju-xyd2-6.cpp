#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	bool flag=false;
	cin>>k;
	for(int i=10000;i<=30000;i++){
		int g=i%10,s=i/10%10,b=i/100%10,q=i/1000%10,w=i/10000;
		int sub1=w*100+q*10+b,sub2=q*100+b*10+s,sub3=b*100+s*10+g;
		if(sub1%k==0&&sub2%k==0&&sub3%k==0){
			cout<<i<<endl;
			flag=true;
		}
	}
	if(flag==false){
		cout<<"No";
	}
	return 0;
}