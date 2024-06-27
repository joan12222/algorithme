#include<bits/stdc++.h>
using namespace std;
int n,op[20],maxx=-2e9,minn=2e9;
char c[20];
bool check(){
	if(c[op[1]]=='+'||c[op[1]]=='-'||c[op[n]]=='+'||c[op[n]]=='-') return false;
	for(int i=1;i<n;i++){
		if((c[op[i]]<'0'||c[op[i]]>'9')&&(c[op[i+1]]<'0'||c[op[i+1]]>'9')) return false;
	}
	return true;
}
int add(int x,int i){
	if(x>=0) return x*10+(c[op[i]]-'0');
	return x*10-(c[op[i]]-'0');
}
int main(){
	//freopen("addsub.in","r",stdin);
	//freopen("addsub.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>c[i];
	for(int i=1;i<=n;i++) op[i]=i;
	do{
		if(check()==false) continue;
		int add1=0,add2=0;
		for(int i=1;i<=n;i++){
			if('0'<=c[op[i]]&&c[op[i]]<='9'){
				if(add1==0) add(add1,i);
				else add(add2,i);
			}else{
				if(c[op[i]]=='+') add1+=add2,add2=0;
				else add1-=add2,add2=0;
			}
		}
		maxx=max(maxx,add1);
		minn=min(minn,add1);
	}while(next_permutation(op+1,op+n+1));
	cout<<maxx<<" "<<minn;
	return 0;
}
