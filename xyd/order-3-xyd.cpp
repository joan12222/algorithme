#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
struct data{
	int ch;
	int ma;
	int tot;
}a[1001];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].ch>>a[i].ma;
		a[i].tot=a[i].ch+a[i].ma;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j].tot<a[j+1].tot){
				swap(a[j],a[j+1]);
			}else if(a[j].tot==a[j+1].tot){
				if(a[j].ch<a[j+1].ch){
					swap(a[j],a[j+1]);
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i].ch<<" "<<a[i].ma<<endl;
	}
	return 0;
}
