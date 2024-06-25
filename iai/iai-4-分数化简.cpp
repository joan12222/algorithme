#include<bits/stdc++.h>
using namespace std;
char c;
long long a,b;
//输出类型 函数名 输入参数 
int len(long long num){
	int c=0;
	while(num>0){
		c++;
		num/=10;
	} 
	return c;
}
int main(){
	cin>>a>>c>>b;
	long long q=a/b;
	long long a1=a;
	long long b1=a;
	a%=b;
	while(a1>0&&b1>0){
		if(a1>=b1){
			a1%=b1;
		}else{
			b1%=a1;
		}
	}
	long long gcd=a1+b1;
	a/=gcd;
	b/=gcd;
	if(a==0){
		cout<<q;
	}else{
		int alen=len(a);
		int blen=len(b);
		int qlen=len(q);
		//first line
		for(int i=1;i<=qlen+blen-alen;i++){
			cout<<" ";
		}
		cout<<a<<endl;
		//second line
		if(q>0){
			cout<<q;
		}
		for(int i=1;i<=blen;i++){
			cout<<"-";
		}
		cout<<endl;
		//third line
		for(int i=1;i<=qlen;i++){
			cout<<" ";
		}
		cout<<b;
	}
	return 0;
}
