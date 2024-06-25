#include<bits/stdc++.h>
using namespace std;
int ans;
string s;
map<string,int> mp;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		for(int j=i;j<s.size();j++){
			string s1=s.substr(i,j-i+1);
			//cout<<s1<<endl;
			if(mp.count(s1)==0){
				mp[s1]=1;
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
