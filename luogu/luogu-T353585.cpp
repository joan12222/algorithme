#include<bits/stdc++.h>
using namespace std;
int n,a[1000005];
int getnow(int now){
	for(int i=1;i<=2;i++){
		++now;
		if(now>n) now-=n;
		while(a[now]){
			++now;
			if(now>n) now-=n;
		}
	}
	return now;
}
int main(){
	cin>>n;
	int now=0;
	for(int i=1;i<=n;i++){
		now=getnow(now);
		a[now]=i;
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
