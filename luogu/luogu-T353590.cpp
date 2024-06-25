#include<bits/stdc++.h>
using namespace std;
int n;
char a[35][35];
int bucket[30]={0};
bool check(int x,int y){
	if(a[x][y]=='.') return false;
	if(x>=2&&x<=n-1){
		if(a[x-1][y]==a[x][y]&&a[x+1][y]==a[x][y]) return true; 
	}
	if(y>=2&&y<=n-1){
		if(a[x][y-1]==a[x][y]&&a[x][y+1]==a[x][y]) return true;
	}
	if(x>=2&&x<=n-1&&y>=2&&y<=n-1){
		if(a[x-1][y-1]==a[x][y]&&a[x+1][y+1]==a[x][y]) return true;
		if(a[x+1][y-1]==a[x][y]&&a[x-1][y+1]==a[x][y]) return true;
	}
	return false;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(check(i,j)){
				cout<<a[i][j];
				return 0;
			}
		}
	}
	cout<<"ongoing";
	return 0;
}
