#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,x,y;
int main(){
	cin>>a>>b>>c;
	for(int i=59;i>=0;i--){
		if(c&(1LL<<i)){
			if(a>=b){
				x|=1LL<<i;
				a--;
			}else{
				y|=1LL<<i;
				b--;
			}
		}
	}
	if(a!=b){
		cout<<"-1";
		return 0;
	}
	for(int i=59;i>=0&&a>0;i--){
		if((c&(1LL<<i))==0){
			x|=1LL<<i;
			y|=1LL<<i;
			a--;
		}
	}
	if(a!=0){
		cout<<"-1";
		return 0;
	}
	cout<<x<<" "<<y<<endl;
	ll tmp=x^y;
	cout<<__builtin_popcountll(x)<<" "<<__builtin_popcountll(y)<<" "<<tmp;
	return 0;
} 
