#include<bits/stdc++.h>
using namespace std;
#define ll long long
int read1(){
	int sum=0,f=1;
	char st=getchar();
	if(st=='-') {
		f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=sum*10+st-'0';
		st=getchar();
	}
	return sum*f;
}
int read2(){
	int sum=0,f=1;
	char st=getchar();
	if('a'<=st&&st<='z'){
		st=getchar();
		return 1e9;
	}
	if(st=='-'){
		f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=sum*10+st-'0';
		st=getchar();
	}
	return sum*f;
}
int main(){
	//freopen("gio.in","r",stdin);
	//freopen("gio.out","w",stdout);
	char ch=getchar();
	while(ch!='(') ch=getchar();
	int a=read1();
	int b=read1();
	int c=read1();
	ch==getchar();
	while(ch!='(') ch=getchar();
	int d=read2();
	int e=read2();
	int f=read2();
	ll ans=0;
	if(c>0){
		for(int i=a;i<b;i+=c){
			int l=d,r=e;
			if(l==1e9) l=i;
			if(r==1e9) r=i;
			ll cnt=(r-l+f-1)/f;
			if(cnt>0) ans+=(2*l+(cnt-1)*f)*cnt/2;
		}
	}else{
		for(int i=a;i>b;i+=c){
			int l=d,r=e;
			if(l==1e9) l=i;
			if(r==1e9) r=i;
			ll cnt=(r-l+f-1)/f;
			if(cnt>0) ans+=(2*l+(cnt-1)*f)*cnt/2;
		}
	}
	cout<<ans;
	return 0;
}
