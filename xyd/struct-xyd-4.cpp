#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
struct Data{
	int a[30];
	string s;
}x[100000];
int main(){
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%d",&x[i].a[j]);
			scanf(" ");
		}
		getline(cin,x[i].s);
		for(int j=0;j<k;j++){
			printf("%d ",x[i].a[j]);
		}
		cout<<x[i].s<<endl;
	}
	return 0;
}
