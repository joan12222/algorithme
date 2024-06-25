#include<bits/stdc++.h>
using namespace std;
/*
表达式树叶子节点是数 非叶子节点是运算符
*/
Node *root;
vector<char> suffix;
void inp(){
	cin>>s;
}
struct Node{
	Node *le,*rt;
	char op;//如果是数，则op=s
	int val;//这个子树的结果
	Node(char_op){
		if(isdigit(op)){
			op='$';
			val=_op—
		}
	}
	if(isdigit) {
		Node = {'$', _op}
	}
}
void build_tree(){
	stack<Node*> st;
	for(auto ch:suffix){
		//扫描后缀表达式，现在处理ch字符
		if(isdigit(ch)){
			//是一个数，建立新结点，压栈
			st.push(new Node(ch));
		}else{
			//建立一个op节点
			Node *p=new Node(ch);
			//从栈里面连续弹出2个结点
			Node *rt=st.top();
			st.pop();
			Node *le=st.top();
			st.pop();
			//从op节点左子树是le，右子树是rt
			p->le=le;
			p->rt=rt;
			//新结点压栈
			st.push(p);
		}
	}
	//扫描结束，st里面剩余1个结点
	root=st.top();
}
void build_suffix(){
	//中缀转后缀
	stack<char> ops;
	for(int i=0;i<s.length();i++){
		//扫描中缀表达式，现在处理字符ch
		char ch=s[i];
		//如果ch是一个数，则直接输出到后缀表达式
		if(isdigit(ch)){
			suffix.push_back(ch);
			continue;
		}
		//现在ch是一个运算符
		//一共四种：(,),&,|
		//左括号，直接压栈
		if(ch=='('){
			ops.push(ch);
			continue;
		}
		//右括号，弹栈直到栈顶是左括号
		if(ch==')'){
			//弹栈，把所有不是左括号的op输入到suffix
			while(ops.top()!='('){
				suffix.push_back(ops.top());
				ops.pop();
			}
			//最后，把这个左括号弹出去
			ops.pop();
			continue;
		}
		//现在ch是&或者|
		//要把优先级>=ch的弹走
		//ch是&，要弹掉栈顶所有的&
		while(ch=='&'&&!ops.empty()&&ops.top()=='&'){
			suffix.push_back(ops.top());
			ops.pop();
		}
		//ch是|，弹掉栈顶所有的|和&
		while(ch=='|'&&!ops.empty()&&(ops.top()=='&'||ops.top()=='|')){
			suffix.push_back(ops.top());
			ops.pop();
		}
	}
}
int 
//计算x子树的结果
int calc(Node *x){
	//如果x是数，直接返回
	if(x->op=='$'){
		return x->val;
	}
	//计算 le op rt
	//先算出左子树的值
	int val_l=calc(x->le);
}
void work(){
	build_suffix();
	build_tree();
	cout<<calc(root)<<endl;
	cout<<cnt_and<<" "<<
}
int main(){
	
	return 0;
}