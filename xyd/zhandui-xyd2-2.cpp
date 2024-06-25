#include<bits/stdc++.h>
using namespace std;
stack<int> a;
int n,order[1010],now;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>order[i];
	}
	for(int i=1;i<=n;i++){
		while(now<=order[i]){
			a.push(now);
			now++;
		}
		if(a.top()==order[i]){
			a.pop();
		}else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}