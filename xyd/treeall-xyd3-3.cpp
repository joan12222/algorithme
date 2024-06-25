#include<bits/stdc++.h>
using namespace std;
const int maxn=(1<<10)+10;
char s[maxn];
int dfs(int l,int r){
	if(l==r){
		if(s[l]=='0'){
			cout<<"B";
		}else{
			cout<<"I";
		}
		return s[l]=='1';
	}
	int sl,sr,k=(l+r)/2;
	sl=dfs(l,k);
	sr=dfs(k+1,r);
	if(sl+sr==0){
		cout<<"B";
		return 0 ;
	} 
	if(sl+sr==2){
		cout<<"I";
		return 1;
	} 
	cout<<"F";
	return 3; 
}
int main(){
	int n;
	cin>>n>>s;
	dfs(0,strlen(s)-1);
	return 0;
} 
