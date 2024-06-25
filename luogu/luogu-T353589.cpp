#include<bits/stdc++.h>
using namespace std;
int n,m;
queue<int> q;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) q.push(i);
	int i=0;
	while(!q.empty()){
		int m2=m,num;
		while(m2--){
			num=q.front();
			q.pop();
			if(m2==0) cout<<num<<" ";
			else q.push(num);
		}
	}
	return 0;
}
