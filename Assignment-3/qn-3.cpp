// Write a program that checks if an expression has balanced parentheses.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkParenthesis(string exp){
    stack <char> s;
    for(int i=0;i<exp.length();i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            s.push(exp[i]);
        }else{
            if (s.empty())
             return false;
            if((exp[i]==')'||exp[i]=='}'||exp[i]==']') ){
                if((s.top()=='(' && exp[i]==')')||(s.top()=='{' && exp[i]=='}')||(s.top()=='[' && exp[i]==']')){
                    s.pop();
            }else{
                return false;
            }
        } 
    }
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}

int main()
{
    string exp ="{}({)[]";
    if(checkParenthesis(exp)){
        cout<<"the expression is valid";
    }else{
        cout<<"the expression is invalid";
    }
    
    return 0;

}
