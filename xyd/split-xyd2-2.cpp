#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[10000][10000];
void dfs(int n,int f,int j){
	if(n==2){
	    a[f][j]=0;
	    return;
	} 
	for(int i=f; i<f+n/2; i++){
		for(int k=j; k<j+n/2; k++){
			a[i][k]=0;
		}
	}
	n=n/2;
	dfs(n,f,j+n);
	dfs(n,f+n,j);
	dfs(n,f+n,j+n);
}
int main(){
	cin >> n;
	n=pow(2,n);
	for(int i=0; i<n; i++){
		for(int k=0; k<n; k++){
			a[i][k]=1;
		} 
	}
	dfs(n,0,0);
	for(int i=0; i<n; i++){
		for(int k=0; k<n; k++){
			cout << a[i][k] << " ";
		} 
		cout << endl;
	}
	return 0;
}