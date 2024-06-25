#include<bits/stdc++.h>
using namespace std;
int n,in[105];
vector<int> edges[105];
queue<int> q;
void toposort(){
	for(int i=1;i<=n;i++){
		if(in[i]==0){
			cout<<i<<" ";
			q.push(i);
		}
	}
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i=0;i<edges[now].size();i++){
			in[edges[now][i]]--;
			if(in[edges[now][i]]==0){
				cout<<edges[now][i]<<" ";
				q.push(edges[now][i]);
			}
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		while(cin>>x&&x!=0){
			edges[i].push_back(x);
			in[x]++;
		}
	}
	toposort();
	return 0;
}
