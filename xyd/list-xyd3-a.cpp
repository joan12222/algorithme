#include<bits/stdc++.h>
using namespace std;
struct student{
	string s;
	int math,chinese;
	int sum,num;
}a[101];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].chinese>>a[i].math;
		a[i].sum=a[i].math+a[i].chinese;
		a[i].num=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j].sum<a[j+1].sum){
				swap(a[j],a[j+1]);
			}else if(a[j].sum==a[j+1].sum){
				if(a[j].num>a[j+1].num){
					swap(a[j],a[j+1]);
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i].s<<" "<<a[i].chinese<<" "<<a[i].math<<" "<<a[i].sum<<endl;
	}
	return 0;
}