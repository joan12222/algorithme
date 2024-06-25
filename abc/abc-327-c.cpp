#include<bits/stdc++.h>
using namespace std;
int a[15][15];
bool check1(){
	for(int i=1;i<=9;i++){
		int bucket[10]={0};
		for(int j=1;j<=9;j++) bucket[a[i][j]]++;
		for(int j=1;j<=9;j++){
			if(bucket[j]!=1) return false;
		}
	}
	return true;
}
bool check2(){
	for(int i=1;i<=9;i++){
		int bucket[10]={0};
		for(int j=1;j<=9;j++) bucket[a[j][i]]++;
		for(int j=1;j<=9;j++){
			if(bucket[j]!=1) return false;
		}
	}
	return true;
}
bool check3(){
	for(int i=1;i<=9;i+=3){
		for(int j=1;j<=9;j+=3){
			int bucket[10]={0};
			for(int k=i;k<i+3;k++){
				for(int w=j;w<j+3;w++) bucket[a[k][w]]++;
			}
			for(int k=1;k<=9;k++){
				if(bucket[k]!=1) return false;
			}
		}
	}
	return true;
}
int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++) cin>>a[i][j];
	}
	if(check1()){
		if(check2()){
			if(check3()) cout<<"Yes";
			else cout<<"No";
		}else cout<<"No";
	}else cout<<"No";
	return 0;
}
