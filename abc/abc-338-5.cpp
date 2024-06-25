#include<bits/stdc++.h>
using namespace std;
struct Chords{
	int if_end,num;
}a[200005];
int n;
stack<int> s;
int main(){
	cin>>n;
	for(int i=1,x,y;i<=n;i++){
		cin>>x>>y;
		if(x>y) swap(x,y);
		a[x]={0,i};
		a[y]={1,i};
	}
	for(int i=1;i<=n;i++){
		if(a[i].if_end==0) s.push(a[i].num);
		else{
			if(s.top()!=a[i].num){
				cout<<"Yes";
				return 0;
			}
			s.pop();
		}
	}
	cout<<"No";
	return 0;
}
