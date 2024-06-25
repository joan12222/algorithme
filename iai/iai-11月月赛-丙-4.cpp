#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll r,c;
int n,x[1000005],y[1000005];
int main(){
	cin>>r>>c>>n;
	for(int i=0;i<n;i++) cin>>x[i]>>y[i];
	sort(x,x+n);
	sort(y,y+n);
	int a=unique(x,x+n)-x;
	int b=unique(y,y+n)-y;
	cout<<a*c+r*b-a*b;
	return 0;
}
