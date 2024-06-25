#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int cnt=0;
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		for(int j=1;j<b.size();j++){
			if(a[i]==b[j]&&a[i+1]==b[j-1]){
				cnt++;
			}
		}
	}
	cout<<(1<<cnt)<<endl;
	return 0;
} 
