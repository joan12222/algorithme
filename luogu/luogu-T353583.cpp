#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	cin>>n>>s;
	int sum=2;
	bool flag=false;
	for(int i=1;i<n;i++){
		if(s[i]=='S') sum++;
		else if(s[i]=='L'&&flag==false){
			flag=true;
		}else{
			sum++;
			flag=false;
		}
	}
	if(sum>n) cout<<n;
	else cout<<sum;
	return 0;
}
