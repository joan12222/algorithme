#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
struct Data{
	int a;
	int b;
	char c;
};
int main(){
	int n;
	Data x[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d %c",&x[i].a,&x[i].b,&x[i].c);
	}
	for(int i=0;i<n;i++){
		printf("%d %d %c\n",x[i].a,x[i].b,x[i].c);
	}
	return 0;
}