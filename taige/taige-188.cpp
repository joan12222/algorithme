#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b,int ans){
	if(b!=0){
		return lcm(b,a%b,ans);
	}else{
		return ans/a;
	}
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b,a*b);
    return 0;
}