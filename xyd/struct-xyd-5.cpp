#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
struct Class{
	int m;
	int a[31];
	int ave=0;
}x[100001];
int main(){
    int n,sum=0,num=0,sumS,aveN;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	sumS=0;
    	scanf("%d",&x[i].m);
    	for(int j=1;j<=x[i].m;j++){
    		scanf("%d",&x[i].a[j]);
    		x[i].ave+=x[i].a[j];
		}
		x[i].ave/=x[i].m;
		sum+=x[i].ave;
	}
	//1:2.7
	//2:6
	//3:3
	//aveN:3.9
	aveN=sum/n;
    for(int i=1;i<=n;i++){
    	if(x[i].ave<aveN){
    		cout<<i<<" ";
		}
	}
    return 0;
}
