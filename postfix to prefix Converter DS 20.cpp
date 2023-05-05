#include<iostream>
#include<stack>
using namespace std;

bool isOperand(char c)
{
 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    return true;
  } else {
    return false;
  }
}
string Postfixtoprefix(string postfix){
stack<string> s;
for(int i=0;i<postfix.length();i++){
if(isOperand(postfix[i])){
// converting post[i] character in build function of constructor string op(1,post[i])
string op(1,postfix[i]);
s.push(op);
	}
	else
	{
string op1=s.top();
 s.pop();
 string op2 = s.top();
 s.pop();
 // 1 method 
 // string exp=post[i]+ap2+op1;
 // s.push(exp); 
 // 2 method
 // this will save your one variable space
 s.push(postfix[i]+op2+op1);		
	}
}
return s.top();
}
int main() 
{  

  	string postfix, postfix_exp;
  	cout<<"Enter a postfix Expression :"<<endl;
  	cin>>postfix;
	cout<<"postfix EXPRESSION: "<<postfix<<endl;
  	postfix_exp = Postfixtoprefix(postfix);
  	cout<<endl<<"Prefix EXPRESSION: "<<postfix_exp;
	  
	return 0;
}
/*
#include<iostream>
#include<stack>

using namespace std;

bool isOperand(char c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    return true;
  } else {
    return false;
  }
}
string PostfixToPrefix(string postfix) {
  stack < string > s;
  for (int i = 0; i < postfix.length(); i++) {
    if (isOperand(postfix[i])) {
      string op(1, postfix[i]);
      s.push(op);
    } else {
      string op1 = s.top();
      s.pop();
      string op2 = s.top();
      s.pop();
      s.push(postfix[i] + op2 + op1);
    }
  }
  return s.top();
}

int main() {

  string prefix, postfix;
  cout << "Enter a POSTFIX Expression :" << endl;
  cin >> postfix;
  cout << "POSTFIX EXPRESSION: " << postfix << endl;
  prefix = PostfixToPrefix(postfix);
  cout << endl << "PREFIX EXPRESSION: " << prefix;

  return 0;
}
*/