#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[1030][1030];
void f(int x,int y,int k){
	if(k==0){
		return;
	}
	int len=pow(2,k-1);	
	if(a[x][y]==1){
		a[x][y]=1;
		a[x][y+len]=1;
		a[x+len][y]=1;
		a[x+len][y+len]=2;
	}else if(a[x][y]==2){
		a[x][y]=2;
		a[x][y+len]=2;
		a[x+len][y]=2;
		a[x+len][y+len]=1;
	}
	f(x,y,k-1);
	f(x,y+len,k-1);
	f(x+len,y+len,k-1);
	f(x+len,y,k-1);
}
int main(){
	cin>>n;
	a[1][1]=1;
	f(1,1,n);
	int m=pow(2,n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}