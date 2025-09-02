#include <iostream>
#include <stack>
#include <string>
using namespace std;

int checkPrecedence(char c){
  if(c == '^')
    return 3;
  else if(c=='*'||c=='/')
    return 2;
  else if(c=='+'||c=='-')
    return 1;
  else 
    return -1;
}

void infix2Postfix(string s){
  stack<char>st;
  string result;
  st.push('(');
  s.append(")");

  for(char x : s){
    if((x>='a'&& x<='z')|| (x>='A'&& x<='Z')||(x>='0'&& x<='9')){
      result+=x;
    }else if(x == '('){
      st.push(x);
    }else if(x==')'){
      while(!st.empty() && st.top()!='('){
        result+=st.top();
        st.pop();
      }
      st.pop();
    }else { 
        while (checkPrecedence(st.top()) >= checkPrecedence(x)) {
            result += st.top();
            st.pop();
        }
        st.push(x);
    }
}
  cout<<result;

}

int main(){
  string exp = "(A+B)*C";
  infix2Postfix(exp);
}