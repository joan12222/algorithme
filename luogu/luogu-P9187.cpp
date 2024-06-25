#include<bits/stdc++.h>
using namespace std;
int c,n,a[100005],level[1<<18];//100000个数 每个数<=250000 
string s[100005];
queue<int> q;
int main(){
	cin>>c>>n;
	int maxx=(1<<c)-1;
	for(int i=0;i<=maxx;i++) level[i]=20;//inf distance
	for(int i=0;i<n;i++){
		cin>>s[i];
		for(int j=0;j<c;j++) a[i]=a[i]*2+(s[i][j]=='G');
		int comp=(1<<c)-1-a[i];
		level[comp]=0;
		q.push(comp);
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int i=0;i<c;i++){
			int mask=1<<i;
			int b=u^mask;
			if(level[b]>level[u]+1){
				level[b]=level[u]+1;
				q.push(b);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<c-level[a[i]]<<endl;
	}
	return 0;
}
