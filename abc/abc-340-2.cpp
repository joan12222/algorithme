#include<bits/stdc++.h>
using namespace std;
int q;
vector<int> a;
int main(){
	cin>>q;
	while(q--){
		int op;
		cin>>op;
		if(op==1){
			int x;
			cin>>x;
			a.push_back(x);
		}else{
			int k;
			cin>>k;
			cout<<a[a.size()-k]<<endl;
		}
	}
	return 0;
}
