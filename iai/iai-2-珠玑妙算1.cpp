#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int whole=0,part=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]==s2[i]) whole++;
	}
	for(int i=0;i<s1.size();i++){
		for(int j=0;j<s2.size();j++){
			if(s1[i]==s2[j]) part++;
		}
	}
	part-=whole;
	cout<<whole<<endl<<part;
	return 0;
}
