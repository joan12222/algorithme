#include<bits/stdc++.h>
using namespace std;
struct Str{
	string ss;
	int step;
};
int n;
string s,t;
queue<Str> q;
map<string,int> mp1;
void bfs(){
	q.push({s,0});
	mp1[s]=1;
	while(!q.empty()){
		Str now=q.front();
		q.pop();
		if(now.ss==t){
			cout<<now.step;
			return;
		}
		//if(mp1.count(now.ss)) continue;
		//mp1[now.ss]=1;
		int blk;/*
		for(int i=0;i<=n;i++){
			if(now.ss[i]=='.'){
				blk=i;
				break;
			}
		}*/
		blk=now.ss.find("..");
		for(int i=0;i<=n;i++){
			if(now.ss[i]!='.'&&now.ss[i+1]!='.'){
				string newss=now.ss;
				newss[blk]=newss[i];
				newss[blk+1]=newss[i+1];
				newss[i]='.',newss[i+1]='.';
				//cout<<now.ss<<endl;
				if(mp1.count(newss)==0){
					q.push({newss,now.step+1});
					mp1[newss]=1;
				}/*
				now.ss[i]=now.ss[blk];
				now.ss[i+1]=now.ss[blk+1];
				now.ss[blk]='.',now.ss[blk+1]='.';*/
			}
		}
	}
	cout<<"-1";
}
int main(){
	cin>>n>>s>>t;
	s+="..";
	t+="..";
	bfs();
	return 0;
}
