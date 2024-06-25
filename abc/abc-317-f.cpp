#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=998244353;
ll N;
int A1,A2,A3,n[64];
bool mem[64][10][10][10][2][2][2][2][2][2];
int cache[64][10][10][10][2][2][2][2][2][2];
int cmp(int old_e,int x,int n){
	if(old_e!=0) return old_e;
	if(x>n) return -1;
	if(x==n) return 0;
	if(x<n) return 1;
}
ll solve(int len,int r1,int r2,int r3,int e1,int e2,int e3,bool z1,bool z2,bool z3){
	if(e1<0||e2<0||e3<0) return 0;
	if(len==64){
		if(r1||r2||r3) return 0;
		if(z1||z2||z3) return 0;
		return 1; 
	}else{
		if(mem[len][r1][r2][r3][e1][e2][e3][z1][z2][z3]) return cache[len][r1][r2][r3][e1][e2][e3][z1][z2][z3];
		ll sum=0;
		for(int b1=0;b1<=1;b1++){
			for(int b2=0;b2<=1;b2++){
				int b3=b1 xor b2;
				sum+=solve(len+1,(r1*2+b1)%A1,(r2*2+b2)%A2,(r3*2+b3)%A3,cmp(e1,b1,n[len]),cmp(e2,b2,n[len]),cmp(e3,b3,n[len]),z1&&(b1==0),z2&&(b2==0),z3&&(b3==0));
				sum%=mod;
			}
		}
		mem[len][r1][r2][r3][e1][e2][e3][z1][z2][z3]=true;
		return cache[len][r1][r2][r3][e1][e2][e3][z1][z2][z3]=sum;
	}
}
int main(){
	cin>>N>>A1>>A2>>A3;
	for(int i=63;i>=0;i--){
		n[i]=N%2;
		N/=2;
	}
	cout<<solve(0,0,0,0,0,0,0,1,1,1);
	return 0;
}
