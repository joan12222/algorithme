#include<bits/stdc++.h>
using namespace std;
//1:数学 2:物理 3:编程 
const int CNT=1000;
const int TYPE=3;
int num[TYPE+5]={0};
int stdgm(){
	int x;
	x=(rand()%TYPE+1);
	//cout<<x<<" ";
	return x;
}
int main(){
	srand((unsigned)time(NULL));
	for(int i=1;i<=CNT;i++){
		int x=stdgm();
		//cout<<x<<" ";
		num[x]++;
	}
	cout<<endl;
	for(int i=1;i<=TYPE;i++) cout<<num[i]<<" ";
	return 0;
}
