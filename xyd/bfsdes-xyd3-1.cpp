#include<bits/stdc++.h>
using namespace std;
int k,m,vis[1005];
struct node{
	int mod;
	string s;
};
queue<node> q;
void bfs(){
	while(!q.empty()){
		node now=q.front();
		q.pop();
		for(int i=0;i<k;i++){
			int mod=(now.mod*10+i)%m;
			if(vis[mod]==0){
				vis[mod]=1;
				q.push({mod,now.s+char('0'+i)});
				if(mod==0){
					cout<<now.s+char('0'+i);
					return;
				}
			}
		}
	}
}
int main(){
	cin>>k>>m;
	//一开始的第一层入队
	for(int i=1;i<k;i++){
		if(i%m==0){
			cout<<i;
			return 0;
		}
		string s;
		//要得到一个一位的字符串i
		s+=char('0'+i);
		q.push(node{i%m,s});
	}
	bfs();
	return 0;
}