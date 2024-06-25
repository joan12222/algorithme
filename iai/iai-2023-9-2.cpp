#include<bits/stdc++.h>
using namespace std;
int n,k=0;
bool flag=false;
string s;
char ans[105][105];
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==1) ans[i-j+1][j]=s[k];
			else ans[j][i-j+1]=s[k];
			k++;
		}
	}
	for(int i=n+1;i<=2*n;i++){
		for(int j=1;j<=2*n-i;j++){
			if(i%2==1) ans[n-j+1][i+j-n]=s[k];
			else ans[i+j-n][n-j+1]=s[k];
			k++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<ans[i][j];
		cout<<endl;
	}
	return 0;
}
