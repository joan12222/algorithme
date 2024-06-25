#include<bits/stdc++.h>
using namespace std;
int n,q,src,dst,acc[200005];
set<int> box[200005];
int main(){
	cin>>n>>q;
	for(int i=1,c;i<=n;i++){
		cin>>c;
		acc[i]=i;
		box[i].insert(c);
	}
	while(q--){
		cin>>src>>dst;
		int srcacc=acc[src],dstacc=acc[dst];
		if(box[acc[src]].size()>box[acc[dst]].size()){
			acc[src]=dstacc;
			acc[dst]=srcacc;
			swap(srcacc,dstacc);
		}
		for(auto item:box[srcacc]) box[dstacc].insert(item);
		box[srcacc].clear();
		cout<<box[dstacc].size()<<endl;
	}
	return 0;
}
