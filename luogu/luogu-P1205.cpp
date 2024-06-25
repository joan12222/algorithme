#include<bits/stdc++.h>
using namespace std;
int n;
char a[15][15],b[15][15],c[15][15],d[15][15];//a原来 b现在 c期望 d work5要用 
bool check(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(b[i][j]!=c[i][j]) return false;
		}
	}
	return true;
}
bool calc1(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) b[j][n-i+1]=a[i][j];
	}
	return check();
}
bool calc2(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) b[n-i+1][n-j+1]=a[i][j];
	}
	return check();
}
bool calc3(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) b[n-j+1][i]=a[i][j];
	}
	return check();
}
bool calc4(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) b[i][n-j+1]=a[i][j];
	}
	return check();
}
bool calc5(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) d[i][n-j+1]=a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=d[i][j];
			if(calc1()) return true;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=d[i][j];
			if(calc2()) return true;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=d[i][j];
			if(calc3()) return true;
		}
	}
	return false;
}
bool calc6(){
	return check();
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			d[i][j]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>c[i][j];
	}
	if(calc1()){
		cout<<"1";
		return 0;
	}
	if(calc2()){
		cout<<"2";
		return 0;
	}
	if(calc3()){
		cout<<"3";
		return 0;
	}
	if(calc4()){
		cout<<"4";
		return 0;
	}
	if(calc5()){
		cout<<"5";
		return 0;
	}
	if(calc6()){
		cout<<"6";
		return 0;
	}
	cout<<"7";
	return 0;

}
