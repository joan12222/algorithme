#include<bits/stdc++.h>
using namespace std;
struct node{
	string s;
	int chinese,math,english;
	int total;
}x[1001];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i].s>>x[i].chinese>>x[i].math>>x[i].english;
		x[i].total=x[i].chinese+x[i].math+x[i].english;
	}
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(abs(x[i].chinese-x[j].chinese)>5||abs(x[i].math-x[j].math)>5||abs(x[i].english-x[j].english)>5||abs(x[i].total-x[j].total)>10){
				continue;
			}else{
				cout<<x[i].s<<" "<<x[j].s<<endl;
			}
		}
	}
	return 0;
}