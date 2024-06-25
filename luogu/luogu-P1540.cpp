#include<bits/stdc++.h>
using namespace std;
int m,n;
queue<int> word;
bool check(int x){
	queue<int> copy=word;
	while(!copy.empty()){
		if(copy.front()==x) return true;
		copy.pop();
	}
	return false;
}
int main(){
	cin>>m>>n;
	int ans=0;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		if(check(x)) continue;
		ans++;
		if(word.size()<=m-1) word.push(x);
		else{
			word.pop();
			word.push(x);
		}
	}
	cout<<ans;
	return 0;
}
