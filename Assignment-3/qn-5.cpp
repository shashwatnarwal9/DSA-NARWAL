// Write a program for the evaluation of a Postfix expression.

#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int evalPostfix(string exp){
    stack <int> s;
    for(int i=0;i<exp.length();i++){
        
        if(exp[i]>='0'&& exp[i]<='9'){
          s.push(exp[i]-'0');
        }else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'||exp[i]=='%'){
          int op2 = s.top();
          s.pop();
          int op1 = s.top();
          s.pop();
          if(exp[i]=='+'){
              int c = op1+op2;
              s.push(c);
          }else if(exp[i]=='-'){
              int c = op1-op2;
              s.push(c);
          }else if(exp[i]=='*'){
              int c = op1*op2;
              s.push(c);
          }else if(exp[i]=='/'){
              int c = op1/op2;
              s.push(c);
          }else if(exp[i]=='^'){
              int c = pow(op1,op2);
              s.push(c);
          }else if(exp[i]=='%'){
              int c = op1%op2;
              s.push(c);
          }
        }
    }
    return s.top();
    
}

int main()
{
    string exp = "345*6/+78-+";
    cout<<evalPostfix(exp);
    return 0;
}