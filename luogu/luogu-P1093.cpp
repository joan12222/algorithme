#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	int num,chinese,math,english,total;
}a[305];
bool cmp(Node x,Node y){
	if(x.total>y.total) return true;
	else if(x.total==y.total){
		if(x.chinese>y.chinese) return true;
		else if(x.chinese==y.chinese){
			if(x.num<y.num) return true;
			else return false;
		}else return false;
	}else return false;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].chinese>>a[i].math>>a[i].english;
		a[i].num=i;
		a[i].total=a[i].chinese+a[i].math+a[i].english;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=min(n,5);i++) cout<<a[i].num<<" "<<a[i].total<<endl;
	return 0;
}
