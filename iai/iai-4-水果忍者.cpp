#include<bits/stdc++.h>
using namespace std;
string s;
int n;
bool mem[1000][2][10001];
int cache[1000][2][10001];
//�����������е�i��ˮ�� ���ߵĳ��� ���ߵ�ʣ������ 
int ninja(int i,int pos,int m){
	if(m<0) return -1000000;
	if(i==n) return 0;
	if(mem[i][pos][m]) return cache[i][pos][m];
	int new_pos;
	if(s[i]=='1'||s[i]=='2') new_pos=0;
	else new_pos=1;
	int new_m=m;
	if(pos!=new_pos) new_m-=6;
	if(s[i]=='1'||s[i]=='3') new_m-=3;
	else new_m-=2;
	int drop=0+ninja(i+1,pos,m);//������ˮ��=���� 
	int pick=1+ninja(i+1,new_pos,new_m);//������ˮ��=�� 
	mem[i][pos][m]=true;
	return cache[i][pos][m]=max(drop,pick);
}
int main(){
	int m;
	cin>>n>>m;
	cin>>s;
	cout<<ninja(0,0,m);
	return 0;
}
