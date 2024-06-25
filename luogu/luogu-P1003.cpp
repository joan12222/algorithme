#include<bits/stdc++.h>
using namespace std;
int n,x,y;
struct Carpet{
	int leftx,lefty,lengthx,lengthy;
}a[10005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].leftx>>a[i].lefty>>a[i].lengthx>>a[i].lengthy;
	cin>>x>>y;
	for(int i=n;i>=1;i--){
		if(a[i].leftx+a[i].lengthx>=x&&a[i].lefty+a[i].lengthy>=y){
			cout<<i;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}
