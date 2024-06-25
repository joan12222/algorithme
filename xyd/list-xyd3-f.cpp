#include<bits/stdc++.h>
using namespace std;
int n,cnt=0,a[100001];
struct node{
	int num=0;
	int stunum=0;
}x[1001];
int main(){
	cin>>n;
	bool flag;
	for(int i=1;i<=n;i++){
		flag=false;
		cin>>a[i];
		for(int j=1;j<=cnt;j++){
			if(x[j].num==a[i]){
				x[j].stunum++;
				flag=true;
				break;
			}
		}
		if(flag==false){
			cnt++;
			x[cnt].num=a[i];
			x[cnt].stunum++;
		}
	}
	for(int i=1;i<=cnt;i++){
		for(int j=1;j<=cnt-i;j++){
			if(x[j].stunum<x[j+1].stunum){
				swap(x[j],x[j+1]);
			}else if(x[j].stunum==x[j+1].stunum){
				if(x[j].num>x[j+1].num){
					swap(x[j],x[j+1]);
				}
			}
		}
	}
	for(int i=1;i<=cnt;i++){
		if(i!=1){
			cout<<"->"<<x[i].num;
		}else{
			cout<<x[i].num;
		}
	}
	return 0;
}