#include<bits/stdc++.h>
using namespace std;
queue<int> a;
int n,x;
int main()
{
	cin>>n;
	char op;
	while(n--){
		cin>>op;
		if(op=='+'){
			cin>>x;
			a.push(x);
		}else{
			a.pop();
		}
	}
	while(a.size()){
		cout<<a.front()<<" ";
		a.pop();
	}
	return 0;
}