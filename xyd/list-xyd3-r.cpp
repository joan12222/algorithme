#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int zm=0,sz=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
    	if(s[i]>='0'&&s[i]<='9'){
    		sz++;
		}
		if((s[i]>='A'&&s[i]<='Z')||(s[i]<='z'&&s[i]>='a')){
			zm++;
		}
	}
	int qt=s.size()-sz-zm-1;
	cout<<"zm="<<zm<<endl;
	cout<<"sz="<<sz<<endl;
	cout<<"qt="<<qt;
    return 0;
}