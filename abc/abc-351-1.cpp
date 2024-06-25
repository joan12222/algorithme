#include<bits/stdc++.h>
using namespace std;
int a[15],b[15],suma,sumb;
int main(){
	for(int i=1;i<=9;i++) cin>>a[i],suma+=a[i];
	for(int i=1;i<=8;i++) cin>>b[i],sumb+=b[i];
	cout<<suma-sumb+1;
	return 0;
}
