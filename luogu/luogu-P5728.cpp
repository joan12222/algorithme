#include<bits/stdc++.h>
using namespace std;
int n;
struct Student{
	int chinese,math,english,total;
}a[1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].chinese>>a[i].math>>a[i].english;
		a[i].total=a[i].chinese+a[i].math+a[i].english;
	}
	int ans=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(abs(a[i].chinese-a[j].chinese)<=5&&abs(a[i].math-a[j].math)<=5&&abs(a[i].english-a[j].english)<=5&&abs(a[i].total-a[j].total)<=10)
				ans++;
		}
	}
	cout<<ans;
	return 0;
} 
