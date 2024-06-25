#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	freopen("vote.in","r",stdin);
	freopen("vote.out","w",stdout);
	cin>>n;
	int x;
	int s=0,cnt=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(cnt==0){
			s=x;
		}
		if(s==x){
			cnt++;
		}else{
			cnt--;
		}
	}
	cout<<s;
	return 0;
}