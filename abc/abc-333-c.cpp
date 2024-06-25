#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
set<ll> s;
ll init[15];
void initt(){
	init[1]=1;
	for(int i=2;i<=12;i++) init[i]=init[i-1]*10+1;
}
int main(){
	initt();
	cin>>n;
	for(int i=1;i<=12;i++){
		for(int j=1;j<=12;j++){
			for(int k=1;k<=12;k++) s.insert(init[i]+init[j]+init[k]);
		}
	}
	for(int i=1;i<n;i++) s.erase(s.begin());
	cout<<*s.begin();
	return 0;
} 
