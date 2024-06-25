#include<bits/stdc++.h>
using namespace std;
string s;
int k,n,f[105][105][30],ans=-0x3f3f3f3f;
map<string,int> c;
int main(){
	cin>>s>>k>>n;
	for(int i=1;i<=n;i++){
		string a,b;
		int x;
		cin>>a>>b>>x;
		string op=a+b;
		c[op]=x; 
	}
	memset(f,-0x3f,sizeof(f));
	for(int i=0;i<26;i++){
		if(i+'a'==s[0]) f[1][0][i]=0;
		else f[1][1][i]=0;
	}
	for(int i=2;i<=s.size();i++){
		for(int j=0;j<=min(i,k);j++){
			for(int x=0;x<26;x++){
				for(int y=0;y<26;y++){
					char s1=x+'a',s2=y+'a';
					string s3="";
					s3+=s1;
					s3+=s2;
					//cout<<s3<<" "<<c[s3]<<endl;
					if(s2==s[i-1]) f[i][j][y]=max(f[i][j][y],f[i-1][j][x]+c[s3]);
					else if(j>0) f[i][j][y]=max(f[i][j][y],f[i-1][j-1][x]+c[s3]);
				}
			}
		}
	}
	for(int i=0;i<=k;i++){
		for(int j=0;j<26;j++) ans=max(ans,f[s.size()][i][j]);
	}
	cout<<ans;
	return 0;
}
