#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,s;
	string s1;
	cin>>h>>s>>s1;
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='u'&&s!=0){
			s--;
		}else if(s1[i]=='d'&&s!=h){
			s++;
		}
	}
	cout<<s;
	return 0;
}