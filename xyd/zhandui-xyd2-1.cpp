#include<bits/stdc++.h>
using namespace std;
int a[100];//数组模拟栈
int top=0;//栈顶所在的位置，还表示元素个数
void Push(int n){
	top++;
	a[top]=n;
}//入栈
void Pop(){
	top--;
}
int Top(){
	return a[top];
}//取出栈顶元素
int Size(){
	return top;
}//计算栈的元素数量
bool Empty(){
	return top==0;
}//判断栈是否为空
//函数写在上面并不臃肿(*^_^*)
int main(){
	int n,x;
	char op;
	cin>>n;
	while(n--){
		cin>>op;
		if(op=='+'){
			cin>>x;
			Push(x);
		}else{
			Pop();
		}
	}
	while(Size()){//元素个数大于0
		cout<<Top()<<" ";
		Pop();
	}
	return 0;
}