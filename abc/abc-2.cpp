#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
char a[105][105];
int n,m;
bool check(int x,int y){
	for(int i=x;i<=x+2;i++){
		for(int j=y;j<=y+2;j++){
			if(a[i][j]!='#') return false;
		}
	}
	for(int i=x+6;i<=x+8;i++){
		for(int j=y+6;j<=y+8;j++){
			if(a[i][j]!='#') return false;
		}
	}
	if(a[x][y+3]!='.'||a[x+1][y+3]!='.'||a[x+2][y+3]!='.'||a[x+3][y+3]!='.'||a[x+3][y+2]!='.'||a[x+3][y+1]!='.'||a[x+3][y]!='.') return false;
	if(a[x+8][y+5]!='.'||a[x+7][y+5]!='.'||a[x+6][y+5]!='.'||a[x+5][y+5]!='.'||a[x+5][y+6]!='.'||a[x+5][y+7]!='.'||a[x+5][y+8]!='.') return false;
	return true;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n-8;i++){
		for(int j=1;j<=m-8;j++){
			if(check(i,j)) cout<<i<<" "<<j<<endl;
		}
	}
	return 0;
} 
