#include<bits/stdc++.h>
using namespace std;
struct Fruit{
	int s,e,fruit;
};
int n,a[200005],vis[200005],num_left;
queue<Fruit> q,q1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	a[n+1]=!a[n];
	for(int i=2,j=1;i<=n+1;i++){
		if(a[i]!=a[i-1]){
			q.push({j,i-1,a[i-1]});
			j=i;
		}
	}
	num_left=n;
	while(num_left){
		while(!q.empty()){
			Fruit now=q.front();
			q.pop();
			while(vis[now.s]==1&&now.s<=now.e) now.s++;
			if(now.s>now.e) continue;
			cout<<now.s<<" ";
			num_left--;
			vis[now.s]=1;
			if(now.s!=now.e){
				now.s++;
				q1.push(now);
			}
		}
		cout<<endl;
		while(!q1.empty()){
			Fruit now1=q1.front();
			q1.pop();
			while(!q1.empty()){
				Fruit now2=q1.front();
				if(now2.fruit==now1.fruit){
					now1.e=now2.e;
					q1.pop();
				}else break;
			}
			q.push(now1);
		}
	}
	return 0;
}
