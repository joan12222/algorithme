#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define H 2
#define W 4
int n;
char a[512*H][512*W];
char b[H][W+1]={" /\\ ",
  			    "/__\\"};
void f(int n,int x,int y){
	if(n==1){
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				a[x+i][y+j]=b[i][j];
			}
		}
		return;
	}
	f(n-1,x,y+pow(2,n-3)*W);
	f(n-1,x+pow(2,n-2)*H,y);
	f(n-1,x+pow(2,n-2)*H,y+pow(2,n-2)*W);
}
int main(){
	cin>>n;
	memset(a,' ',sizeof(a));
	f(n,0,0);
	int m=pow(2,n-1);	
	for(int i=0;i<m*H;i++){
		for(int j=0;j<m*W;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}