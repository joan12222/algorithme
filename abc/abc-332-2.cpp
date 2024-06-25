#include <bits/stdc++.h>
using namespace std;
int k,g,m,x,y,z;
int main(){
	cin>>k>>g>>m;
	for(int i=0;i<k;i++){
		if(x==g) x=0;
		else if(y==0) y=m;
		else{
			z=min(g-x,y);
			x+=z;
			y-=z;
		}
	}
	cout<<x<<" "<<y;
	return 0;
}

