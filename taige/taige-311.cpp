#include<bits/stdc++.h>
using namespace std;
char a[10][10];
int b[10][10];
int f[10][10];
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++) cin>>a[i][j];
	}
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
			if(a[i][j]=='*') b[i][j]=-1;
			else b[i][j]=a[i][j]-'0';
	f[1][1]=b[1][1];
	for(int i=1;i<=5;i++){
		b[i][0]=INT_MIN;
		b[0][i]=INT_MIN;
	}
	for(int i=1;i<=5;i++)
		for(int j=1+(i==1);j<=5;j++){
			f[i][j]=max(f[i-1][j],f[i][j-1])+b[i][j];
		}
	cout<<f[5][5];
	return 0;
}
