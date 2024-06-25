#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,w;
	cin>>w>>n;
	bool flag=true;
	//w=2 is the easiest case because every num can be in binary
	//and the famas can completely express binary
	while(n>1){
		int r=n%w;
		if(r==w-1){
			r=-1;//when binary, r can't be -1, it will go diedxunhuan
		}
		if(r==0||r==1||r==-1){
			n=(n-r)/w;//the most important diedai gongshi how does n become small
		}else{
			flag=false;
			break;
		}
	}
	if(flag){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}