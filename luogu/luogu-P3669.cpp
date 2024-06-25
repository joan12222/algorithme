#include<bits/stdc++.h>
using namespace std;
struct Node{
	int num,t;
}a[100005];
bool cmp(Node x,Node y){
	return x.t<y.t;
}
int n,ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].num>>a[i].t;
	sort(a+1,a+n+1,cmp);
	int i=1,j=n;
	while(i<=j){
		ans=max(ans,a[i].t+a[j].t);
		if(a[i].num<a[j].num){
			a[j].num-=a[i].num;
			i++;
		}else if(a[i].num>a[j].num){
			a[i].num-=a[j].num;
			j--;
		}else{
			i++;
			j--;
		}
	}
	cout<<ans;
	return 0;
}
