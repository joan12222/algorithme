#include<bits/stdc++.h>
using namespace std;
struct node{
	int a,b,c;
}x[100001];
int gcd(int x,int y){
	while(x%y!=0){
		int temp=x;
		x=y;
		y=temp%y;
	}
	return y;
}
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i].a>>x[i].b>>x[i].c;
		cin>>m;
		string op;
		int num;
		while(m--){
			cin>>op;
			if(op.compare("S")==0){
				if(x[i].a>x[i].b) swap(x[i].a,x[i].b);
				if(x[i].a>x[i].c) swap(x[i].a,x[i].c);
				if(x[i].b>x[i].c) swap(x[i].b,x[i].c);
			}else if(op.compare("Sw")==0){
				cin>>num;
				if(num==1) swap(x[i].a,x[i].b);
				if(num==2) swap(x[i].b,x[i].c);
				if(num==3) swap(x[i].a,x[i].c);
			}else if(op.compare("C")==0){
				cout<<gcd(x[i].a,x[i].b)*gcd(x[i].b,x[i].c)%100000+x[i].a+x[i].b+x[i].c<<endl;
			}
		}
	}
	return 0;
}