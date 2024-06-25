#include<bits/stdc++.h>
using namespace std;
int n;
struct Node{
	long long x,y;
}a[100005];
bool cmp(Node p,Node q){
	return p.x<q.x||(p.x==q.x&&p.y<q.y);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a+1,a+n+1,cmp);
	long long begin=a[1].x,end=a[1].y;
	for(int i=2;i<=n;i++){
		if(a[i].x>end){
			cout<<begin<<" "<<end<<endl;
			begin=a[i].x;
			end=a[i].y;
		}else{
			end=max(end,a[i].y);
		}
	}
	cout<<begin<<" "<<end;
	return 0;
}
