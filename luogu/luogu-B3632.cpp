#include<bits/stdc++.h>
using namespace std;
bitset<64> a,b;
int x,y,vv;
int main(){
	cin>>x;
	for(int i=1;i<=x;i++){
		cin>>vv;
		a.set(vv,1);
	}
	cin>>y;
	for(int i=1;i<=y;i++){
		cin>>vv;
		b.set(vv,1);
	}
	cout<<a.count()<<endl;
	bitset<64> c=a&b;
	for(int i=0;i<=63;i++){
		if(c[i]) cout<<i<<" ";
	}
	cout<<endl;
	c=a|b;
	for(int i=0;i<=63;i++){
		if(c[i]) cout<<i<<" ";
	}
	return 0;
}
