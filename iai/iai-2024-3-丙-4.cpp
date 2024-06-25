#include<bits/stdc++.h>
using namespace std;
struct GP{
	int mon,num;
}inn[100005],outt[100005];
int t,k1,k2;
map<int,int> in,out,rein,reout;
bool cmp1(GP x,GP y){
	return x.mon<y.mon;
}
bool cmp2(GP x,GP y){
	return x.mon>y.mon;
}
int main(){
	cin>>t;
	while(t--){
		string op;
		int a,b;
		cin>>op>>a>>b;
		if(op=="BUY"){
			if(in.count(a)) inn[in[a]].num+=b;
			else{
				in[a]=++k1;
				inn[k1].mon=a;
				inn[k1].num=b;
				//rein[k1]=a;
			}
		}else{
			if(out.count(a)) outt[out[a]].num+=b;
			else{
				out[a]=++k2;
				outt[k2].mon=a;
				outt[k2].num=b;
				//reout[k2]=a;
			}
		}
	}
	sort(inn+1,inn+k1+1,cmp1);
	sort(outt+1,outt+k2+1,cmp2);
	cout<<k1+k2<<endl;
	for(int i=1;i<=k1;i++) cout<<"BUY "<<inn[i].mon<<" "<<inn[i].num<<endl;
	for(int i=1;i<=k2;i++) cout<<"SELL "<<outt[i].mon<<" "<<outt[i].num<<endl;
	return 0;
}
