#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[1200][1200];
void f(int n,int x,int y){
	int len=pow(2,n-1);
	if(n==1){
	//	/\
	//   /__\
        a[x+len][y]='/';
        a[x+len-1][y+1]='/';
        a[x+len-1][y+1]='_';
        a[x+len-1][y+2]='_';
        a[x+len-1][y+3]='\\'; 
        a[x+len][y+2]='\\'; 
        return;
    }   
	f(n-1,x+len,y);
	f(n-1,x,y+len);
	f(n-1,x+len,y+len);
}
int main(){
	int n;
	memset(a,(' '),sizeof(a));
	cin>>n;
	f(n,1,1);
	int m=pow(2,n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j];
		}
	}
	return 0;
}