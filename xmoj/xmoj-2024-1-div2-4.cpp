#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
string s;
char alpha[30];
bool if_pall(string s){
	string rs=s;
	reverse(rs.begin(),rs.end());
	if(s==rs) return true;
	return false;
}
int main(){
	//freopen("account.in","r",stdin);
	//freopen("account.out","w",stdout);
	cin>>s;
	int n=s.size();
	/*
	for(int i=0;i<n;i++) num1[s[i]-'a'+1]=i;
	for(int i=0;i<n;i++) num2[i]=num1[rs[i]-'a'+1];
	f[0]=-inf;
	for(int i=0;i<n;i++){
		int left=0,right=len+1;
		while(left+1!=right){
			int mid=(left+right)/2;
			if(num2[i]>f[mid]) left=mid;
			else right=mid;
		}
		f[right]=num2[i];
		len=max(len,right);
	}
	cout<<len<<endl;
	if(n-len>1){
		cout<<"NA";
		return 0;
	}
	*/
	for(int j=1;j<=26;j++) alpha[j]=char('a'+j-1);
	for(int i=0;i<=n;i++){
		for(int j=1;j<=26;j++){
			string s1=s;
			s=s.substr(0,i)+alpha[j]+s.substr(i,n);
			//cout<<s<<endl;
			if(if_pall(s)){
				cout<<s;
				return 0;
			}
			s=s1;
		}
	}
	cout<<"NA";
	return 0;
}
