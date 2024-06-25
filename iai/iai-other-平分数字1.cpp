#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[25];
bool dfs(int i,int diff){
	if(i==n+1) return diff==0;
	else return dfs(i+1,diff+a[i])|dfs(i+1,diff-a[i]);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	if(dfs(1,0)){
		cout<<"Matched";
	}else{
		cout<<"No";
	}
    return 0;
}

