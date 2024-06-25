#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll b[200005],build[200005],last;
struct Node{
	int num,idx;
}a[200005];
bool cmp(Node x,Node y){
	return x.num<y.num;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
		a[i].idx=i;
	}
	sort(a+1,a+n+1,cmp);
	//for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i].num;
	build[n]=0;
	last=1;
	for(int i=n-1;i>=1;i--){
		if(a[i].num==a[i+1].num){
			build[i]=build[i+1];
			last++;
		}else{
			build[i]=build[i+1]+last*a[i+1].num;
			last=1;
		}
	}
	//for(int i=1;i<=n;i++) cout<<build[i]<<" ";
	//cout<<endl;
	for(int i=1;i<=n;i++) b[a[i].idx]=build[i];
	for(int i=1;i<=n;i++) cout<<b[i]<<" ";
	return 0;
}
/*
1 1 2 4 4
1 2 4 8 12
10 10 8 0 0
*/
