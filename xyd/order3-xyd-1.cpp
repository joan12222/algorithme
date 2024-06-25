#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	int a[10]={1,4,3,7,2,7,4};
	sort(a,a+7,cmp);
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}