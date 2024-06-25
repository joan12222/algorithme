#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,c;
	cin>>n>>m>>c;
	if(c%m==0){
		cout<<c/m<<" "<<m;
	}else{
		int row=c/m+1;
		int col=c-(row-1)*m;
		cout<<row<<" "<<col;
	}
	return 0;
}
