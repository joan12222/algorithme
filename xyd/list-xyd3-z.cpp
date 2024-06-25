#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0,ans[505],cnt=1;
	for(int i=2;i<=n;i++){
		if(sum+i<=n){
			if(n-sum-i>1){
				sum+=i;
				ans[cnt++]=i;
			}else{
				ans[cnt]=n-sum;
				break;
			}
		}else{
			ans[cnt]=n-sum;
			break;
		}
	}
	sort(ans+1,ans+cnt+1);
	long long pro=1;
	string s[1005];
	for(int i=1;i<=cnt;i++){
		cout<<ans[i]<<" ";
		s[i]=to_string(ans[i]);
	}
	cout<<endl;
	int a[10005]={0},b[10005]={0},c[20005]={0};
	int len1=s[1].size();
	int len2=s[2].size();
	int len3=len1+len2;
	for(int i=0;i<len1;i++){
		a[len1-i-1]=s[1][i]-'0';
	}
	for(int i=0;i<len2;i++){
		b[len2-i-1]=s[2][i]-'0';
	}
	for(int i=1;i<=len1;i++){
		for(int j=1;j<=len2;j++){
			c[i+j-1]+=a[i]*b[j];
		}
	}
	for(int i=1;i<=len3;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	while(len3>1&&c[len3]==0){
		len3--;
	}
	for(int i=len3;i>=1;i--){
		s[2]+=to_string(c[i]);
	}
	/*
	for(int i=0;i<s[2].size();i++){
		cout<<s[2][i];
	}
	cout<<endl;
	*/
	for(int i=2;i<cnt;i++){
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		for(int j=0;j<len1;j++){
			a[len1-j-1]=s[i][j]-'0';
		}
		for(int j=0;j<len2;j++){
			b[len2-j-1]=s[i+1][j]-'0';
		}
		for(int j=1;j<=len1;j++){
			for(int k=1;k<=len2;k++){
				c[j+k-1]+=a[j]*b[k];
			}
		}
		for(int j=1;j<=len3;j++){
			c[j+1]+=c[j]/10;
			c[j]%=10;
		}
		while(len3>1&&c[len3]==0){
			len3--;
		}
		for(int j=len3;j>=1;j--){
			s[i+1]+=to_string(c[len3-j-1]);
		}
	}
	for(int i=0;i<s[cnt-1].size();i++){
		cout<<s[cnt-1][i];
	}
	return 0;
}