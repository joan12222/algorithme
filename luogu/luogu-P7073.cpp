#include<bits/stdc++.h>
#include<sstream>
using namespace std;
#define ll long long
int n,m,lson[1000005],rson[1000005],assign[1000005],sensitive[1000005];
char type[1000005];
int cache[1000005];
stack<int> s;
int calc(int root){
	if(type[root]=='x') return cache[root] = assign[lson[root]];
	if(type[root]=='!') return cache[root] = !calc(lson[root]);
	if(type[root]=='|') return cache[root] = calc(lson[root])|calc(rson[root]);
	if(type[root]=='&') return cache[root] = calc(lson[root])&calc(rson[root]);
}
void mark(int root){
	if(type[root]=='!'){
		mark(lson[root]);
	}else if(type[root]=='|'){
		if(cache[lson[root]]==0) mark(rson[root]);
		if(cache[rson[root]]==0) mark(lson[root]);
	}else if(type[root]=='&'){
		if(cache[lson[root]]==1) mark(rson[root]);
		if(cache[rson[root]]==1) mark(lson[root]);
	}else sensitive[lson[root]]=1;
}
int main(){
	string line;
	getline(cin,line);
	stringstream sin(line);
	string token;
	int i=0;
	while(sin>>token){
		i++;
		if(token[0]=='x'){
			type[i]='x';
			int val=0;
			for(int j=1;j<token.size();j++) val=val*10+token[j]-'0';
			lson[i]=val;
			s.push(i);
		}else if(token[0]=='!'){
			type[i]='!';
			lson[i]=s.top();
			s.pop();
			s.push(i);
		}else{
			type[i]=token[0];
			lson[i]=s.top();
			s.pop();
			rson[i]=s.top();
			s.pop();
			s.push(i);
		}
	}
	cin>>n;
	for(int j=1;j<=n;j++) cin>>assign[j];
	int old=calc(s.top());
//	sensitive[s.top()]=1;
	mark(s.top());
	cin>>m;
	while(m--){
		int x;
		cin>>x;
		if(sensitive[x]==1) cout<<1-old<<endl;
		else cout<<old<<endl;
	}
	return 0;
}
