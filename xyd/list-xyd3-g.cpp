#include<bits/stdc++.h>
using namespace std;
int n,m,k;
struct node{
	int a[15];
	int num;
	int ave;
	int s;
}x[1005];
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		x[i].num=i;
		for(int j=1;j<=k;j++){
			cin>>x[i].a[j];
			x[i].ave+=x[i].a[j];
			x[i].s+=x[i].a[j]*x[i].a[j];
		}
		x[i].ave/=k;
		x[i].s-=n*x[i].ave*x[i].ave;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(x[j].ave<x[j+1].ave){
				swap(x[j],x[j+1]);
			}else if(x[j].ave==x[j+1].ave){
				if(x[j].s>x[j+1].s){
					swap(x[j],x[j+1]);
				}else if(x[j].s==x[j+1].s){
					if(x[j].num>x[j+1].num){
						swap(x[j],x[j+1]);
					}
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<x[i].num<<" ";
	}
	return 0;
}