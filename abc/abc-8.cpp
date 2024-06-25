#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define ll long long
ll n;
vector<string> names;
vector<string> bucket;
bool check(string s){
	for(int i=0;i<bucket.size();i++){
		if(bucket[i]==s) return false;
	}
	return true;
}
int main(){
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>s;
		names.push_back(s);
	}
	for(int i=0;i<n;i++){
		ll k=0;
		string name="";
		while(name==""||check(name)==false){
			name+=names[i];
			//cout<<i<<" "<<name<<endl;
			k++;
		}
		bucket.push_back(name);
		cout<<k<<" ";
	}
	return 0;
} 
