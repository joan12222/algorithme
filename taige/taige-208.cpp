#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
int main(){
	int k;
	double s=0;
	cin>>k;
	for(ll i=1;i<=INF;i++){
		s+=1/double(i);
		if(s>k){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
