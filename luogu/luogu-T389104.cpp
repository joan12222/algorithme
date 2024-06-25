#include<bits/stdc++.h>
using namespace std;
int n,op,x;
priority_queue<int,vector<int>,greater<int>> q;
int main(){
	cin>>n;
	while(n--){
		cin>>op;
		if(op==1){
			cin>>x;
			q.push(x);
		}else if(op==2) cout<<q.top()<<endl;
		else q.pop();
	}
	return 0;
}
