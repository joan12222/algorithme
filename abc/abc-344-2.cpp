#include<bits/stdc++.h>
using namespace std;
int a;
void dfs(int a){
	if(a==0) return;
	cin>>a;
	dfs(a);
	cout<<a<<endl;
}
int main(){
	cin>>a;
	dfs(a);
	cout<<a;
	return 0;
}
