#include<bits/stdc++.h>
using namespace std;
int n,q;
queue<int> qu;
int score[1005];
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++) qu.push(i);
	int x,y;
	for(int i=1;i<=n;i++) score[i]=1;
	while(q--){
		cin>>x>>y;
		while(x--){
			int num=qu.front();
			qu.pop();
			if(x==0) score[num]+=y;
			if(score[num]) qu.push(num);
			else cout<<num<<" ";
		}
	}
	return 0;
}
