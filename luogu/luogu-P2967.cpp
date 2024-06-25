#include<bits/stdc++.h>
using namespace std;
int n,v,save[100005],fork[100005];
int main(){
	cin>>n>>v;
	while(n--){
		int console,num;
		cin>>console>>num;
		for(int x=0;x+console<=v;x++) fork[x+console]=save[x];
		while(num--){
			int price,value;
			cin>>price>>value;
			for(int x=v;x>=price+console;x--){
				fork[x]=max(fork[x],fork[x-price]+value);
			}
		}
		for(int x=console;x<=v;x++) save[x]=max(save[x],fork[x]);
	}
	cout<<save[v];
	return 0;
}
