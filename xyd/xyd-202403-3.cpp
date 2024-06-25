#include<bits/stdc++.h>
using namespace std;
int a,b,c,k;
string s;
int main(){
	cin>>a>>b>>c>>k;
	for(int i=1;i<=a;i++) s+='a';
	for(int i=1;i<=b;i++) s+='b';
	for(int i=1;i<=c;i++) s+='c';
	int num=0;
	do{
		num++;
		if(num==k) break;
	}while(next_permutation(s.begin(),s.end()));
	cout<<s;
	return 0;
}
