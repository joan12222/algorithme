#include<bits/stdc++.h>
using namespace std;
string s;
int x,a[10005],b[10005];
int main(){
	getline(cin,s);
	int last=0,cnt=1,len=s.size();
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]!=' '){
			break;
		}else{
			len--;
		}
	}
	for(int i=0;i<len;i++){
		if(s[i]==' '){
			a[cnt++]=stoi(s.substr(last,i-last));
			last=i+1;
		}
	}
	a[cnt]=stoi(s.substr(last,len-last+1));
	cin>>x;
	int newcnt=1;
	bool flag=true;
	for(int i=1;i<=cnt;i++){
		if(a[i]==x&&flag){
			flag=false;
		}else{
			b[newcnt++]=a[i];
		}
	}
	newcnt--;
	if(flag){
		cout<<"cishumeiyou";
		return 0;
	}else{
		for(int i=1;i<=newcnt;i++){
			cout<<b[i]<<" ";
		}
	}
	return 0;
}