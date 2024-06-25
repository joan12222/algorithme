#include<bits/stdc++.h>
using namespace std;
int h,w,n,ans;
string s;
char a[505][505];
bool check(int x,int y){
	for(int i=0;i<s.size();i++){
		if(s[i]=='L') y--;
		if(s[i]=='R') y++;
		if(s[i]=='U') x--;
		if(s[i]=='D') x++;
		if(a[x][y]=='#') return false;
	}
	return true;
}
int main(){
	cin>>h>>w>>n>>s;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++) cin>>a[i][j];
	}
	for(int i=2;i<h;i++){
		for(int j=2;j<w;j++){
			if(a[i][j]=='#') continue;
			if(check(i,j)) ans++;
		}
	}
	cout<<ans;
	return 0;
}
