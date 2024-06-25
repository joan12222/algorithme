#include<bits/stdc++.h>
using namespace std;
int n,op,k;
string now;
map<int,string> m;
map<string,int> m1;
int main(){
	freopen("password.in","r",stdin);
	freopen("password.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		string c;
		cin>>c;
		m[i]=c;
		m1[c]=i;
	}
	k=n;
	while(cin>>op){
		if(op!=0){
			now+=m[op];
			continue;
		}
		cout<<now<<" ";
		if(m1.count(now)==0){
			k++;
			m1[now]=k;
			m[k]=now;
		}
		now="";
	}
	return 0;
}
