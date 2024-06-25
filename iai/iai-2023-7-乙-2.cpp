#include<bits/stdc++.h>
using namespace std;
int n;
struct Rectangle{
	long x,y;
}a[200005];
bool cmp(Rectangle a,Rectangle b){
	if(a.x>b.x) return true;
	else if(a.x==b.x){
		if(a.y>=b.y) return true;
		else return false;
	}else return false;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a+1,a+n+1,cmp);
	int ans=0;
	for(int i=1;i<n;i++){
		if((a[i].x>=a[i+1].x&&a[i].y>=a[i+1].y)||(i!=1&&a[i].x==a[i+1].x&&a[i+1].y<=a[i-1].y)) ans++;
	}
	cout<<ans;
	return 0;
}
