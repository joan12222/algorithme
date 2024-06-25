#include<bits/stdc++.h>
using namespace std;
queue<int> a;
int main()
{
	int n,op;
	long long x;
	scanf("%d",&n);
	while(n--){
		cin>>op;
		if(op==1){
			scanf("%d",&x);
			a.push(x);
		}else if(op==2){
			if(a.size()==0){
				cout<<"Invalid"<<endl;
			}else{
				cout<<a.front()<<endl;
				a.pop();
			}
		}else if(op==3){
			cout<<a.size()<<endl;
		}
	}
	return 0;
}