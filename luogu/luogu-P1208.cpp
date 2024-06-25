#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0;
struct Node{
	int a,b;
}a[5005];
bool cmp(Node x,Node y){
	if(x.a!=y.a) return x.a<y.a;
	else return x.b>y.b;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>a[i].a>>a[i].b;
	sort(a+1,a+m+1,cmp);
	int i=1;
	while(n){
		if(a[i].b!=0){
			a[i].b--;
			ans+=a[i].a;
			n--;
		}else i++;
	}
	cout<<ans;
	return 0;
}
