#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,n,ans;
	cin>>a>>n;
	queue<int> q1,q2;
	while(n--){
		ans = a;
		q1.push(2*a+1); q2.push(3*a+1);
		if(q1.front()<q2.front()){
			a=q1.front();
			q1.pop();
		}else if(q1.front()>q2.front()){
			a=q2.front();
			q2.pop();
		}else{
			a=q1.front();
			q1.pop();
			q2.pop();
		}
	}
	cout<<ans<<endl;
	return 0;
}
