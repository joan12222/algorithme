#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
char a[(1<<10)+5][2*((1<<10)+5)];
void dfs(int k,int x,int y){
	if(k==1){
		a[x][y]=a[x][y+1]=a[x][y+2]=a[x][y+3]=a[x+1][y+1]=a[x+1][y+2]='_';
		a[x+1][y]='\\';
		a[x+1][y+3]='/';
		return;
	}
	int len=1<<k-1;
	dfs(k-1,x,y+len);
	dfs(k-1,x+len,y);
	dfs(k-1,x+len,y+2*len);
}
int main(){
	//freopen("password.in","r",stdin);
	//freopen("password.out","w",stdout);
	cin>>n;
	dfs(n,1,1);
	int row=1<<n;
	int col=1<<n+1;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(a[i][j]) cout<<a[i][j];
			else cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
