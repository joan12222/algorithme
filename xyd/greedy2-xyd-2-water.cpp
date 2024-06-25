#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,time,w[10000];
	cin>>n>>m;
	int t[105]={0};
	for(int i=0;i<n;i++){
		cin>>time;
		w[0]+=time;
		sort(w,w+m);
	}
	cout<<w[m-1];
	return 0;
}