#include<bits/stdc++.h>
using namespace std;
string s;
int num,ans;
int main(){
	freopen("loong.in","r",stdin);
	freopen("loong.out","w",stdout);
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='l') num=1;
		else if(s[i]=='o'&&(num==1||num==2)) num++;
		else if(s[i]=='n'&&num==3) num++;
		else if(s[i]=='g'&&num==4){
			num=0;
			ans++;
		}else num=0;
	}
	cout<<ans;
	return 0;
}
