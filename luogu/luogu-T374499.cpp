#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,sx,sy,ex,ey,k;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>sx>>sy>>ex>>ey>>k;
		if(abs(ex-sx)+abs(ey-sy)<=k&&(k-abs(ex-sx)-abs(ey-sy))%2==0) cout<<"Reimu"<<endl;
		else cout<<"Marisa"<<endl;
	}
	return 0;
}
