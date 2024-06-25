#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int hour=n/3600;
	n%=3600;
	int minute=n/60;
	n%=60;
	int second=n;
	cout<<hour<<":"<<minute<<":"<<second;
	return 0;
}
