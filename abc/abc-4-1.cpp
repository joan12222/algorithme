#include<bits/stdc++.h>
using namespace std;
int M,D,y,m,d;
int main(){
	cin>>M>>D>>y>>m>>d;
	if(d!=D) cout<<y<<" "<<m<<" "<<d+1;
	else if(d==D&&m!=M) cout<<y<<" "<<m+1<<" "<<"1";
	else cout<<y+1<<" 1 1";
	return 0;
}
