#include<bits/stdc++.h>
using namespace std;
int n,sz,cursor;
string t[50005];
int main(){
	cin>>n;
	while(n--){
		char cmd;
		cin>>cmd;
		if(cmd=='f'){
			if(cursor<sz){
				cout<<t[cursor]<<endl;
				cursor++;
			}else cout<<"?"<<endl;
		}else if(cmd=='b'){
			if(cursor>1){
				cursor--;
				cout<<t[cursor-1]<<endl;
			}else cout<<"?"<<endl;
		}else if(cmd=='v'){
			string new_website;
			cin>>new_website;
			t[cursor]=new_website;
			cursor++;
			sz=cursor+1;
			cout<<new_website<<endl;
		}
	}
	return 0;
}
