#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,d;
	double sum=0;
	double f,u;
	while(scanf("%d%lf%d%lf",&h,&u,&d,&f)&&(h!=0||u!=0||d!=0||f!=0)){
		double num=u;
		sum=0.0;
		for(int i=1;i<=INT_MAX;i++){
			if(u>=0){
				sum+=u;
				u-=num*f/100;
			}
			if(sum>h){
				printf("SUCCESS ON DAY %d\n",i);
				break;
			}else{
				sum-=d;
			}
			if(sum<0){
				printf("FAILURE ON DAY %d\n",i);
				break;
			}
		}
	}
	return 0;
}