#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int a[257]={0};
	getline(cin,s);
	//I am a boy
	//a, 'a' - 'a' 0
	//b, 'b' - 'a' 1
	//c, 'c' - 'a' 2
	//A, 'A'
	int num;
	for(int i=0;i<s.size();i++){
		num=int(s[i]);
		a[num]++;
	}
	for(int i=0;i<256;i++){
		if(i!=int(' ')){
			for(int j=0;j<a[i];j++){
				cout<<char(i);
			}
		}
	}
	/*
	char a;
	scanf("%c",&a);
	printf("%d",a);
	*/
	return 0;
}