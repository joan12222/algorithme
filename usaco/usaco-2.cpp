#include<bits/stdc++.h>
using namespace std;
int T, int N, int K;
int a[25][25];
int b[25][25];

dfs(int sx, int sy) {
	if(isGoal()) {
		cout<<"YES";
	}
	for(int i=1; i<=N-K+1; i+=K) {
		for(int j=1; j<=N-K+1; j+=K) {
			
		}
	}
	cout<<"NO";
}
int main() {
	cin>>T;
	cin>>N;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			cin>>a[i][j];
		}
	}
	cin>>K;
	for(int i=1; i<=K; i++) {
		for(int j=1; j<=K; j++) {
			int val;
			cin>>val;
			b1[i][j]=val;
			b2[i][(j+1)]=val;
		}
	}
	int c[4][][] = {b, } 
	for(int i=1; i<=N-K+1; i++) {
		for(int j=1; j<=N-K+1; j++) {
			dfs(i, j, )
		}
	}
}