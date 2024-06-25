#include<bits/stdc++.h>
using namespace std;
//从c[]字符串的开头吃一个int，不允许超过max_val
//返回：如果吃成功，则返回int的长度，如果吃失败，返回-1
int eatInt(char*c,int maxVal){
	int res=0;
	//字符串不以数字开头
	if(!isdigit(c[0])){
		return -1;
	}
	//不允许前导0
	if(c[0]=='0'&&isdigit(c[1])){
		return -1;
	}
	int pos;
	int num=0;
	for(pos=0;isdigit(c[pos]);pos++){
		num=num*10+c[pos]-'0';
		//超出限制
		if(num>maxVal){
			return -1;
		}
	}
	return pos;
}
int eatChar(char*c,char ch){
	if(c[0]!=ch){
		return -1;
	}else{
		return 1;
	}
}
//判断s是否合法
bool addrCheck(string s){
	char *p=(char*)s.c_str();
	int len;
	len=eatInt(p,255);
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatChar(p,'.');
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatInt(p,255);
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatChar(p,'.');
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatInt(p,255);
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatChar(p,'.');
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatInt(p,255);
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatChar(p,':');
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatInt(p,65535);
	if(len==-1){
		return false;
	}
	p+=len;
	len=eatChar(p,'\0');
	if(len==-1){
		return false;
	}
	p+=len;
	return true;
}
int main(){
	int n;
	string op,ad;
	map<string,int> servers;
	for(int i=1;i<=n;i++){
		cin>>op>>ad;
		bool isValid=addrCheck(ad);
		if(!isValid){
			cout<<"ERR"<<endl;
			continue;
		}
		if(op=="Server"){
			if(servers.count(ad)==0){
				cout<<"OK"<<endl;
				servers[ad]=i;
			}else{
				cout<<"FAIL"<<endl;
			}
		}else{
			if(servers.count(ad)){
				cout<<serves[ad]<<endl;
			}else{
				cout<<"FAIL"<<endl;
			}
		}
	}
}