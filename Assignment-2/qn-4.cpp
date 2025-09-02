#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string concat(string s1,string s2){
  s1+=s2;
  return s1;
}

void revStr(string s1){
  int i=0;
  for(int i=s1.length()-1;i>=0;i--){
    cout<<s1[i];
  }
  cout<<"\n";
}

void delVowels(string s1){
  string result;
  
  for(char c: s1){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
      continue;
    }else{
      result+=c;
    }
  }
  cout<<result<<endl;
}
void sortStr(string s1){
  char temp;
  for(int i=0;i<s1.length();i++){
    for(int j=i+1;j<s1.length()-1;j++){
      if(s1[i]>s1[j]){
        temp = s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
      }
    }
  }
  cout<<s1<<endl;
}

int main(){
  string s1 = "Hello";
  string s2 = " World";
  s1 = concat(s1,s2);
  cout<<s1<<"\n";
  revStr(s1);
  delVowels(s1);
  sortStr(s1);
  cout<<"Enter a character\n";
  char c;
  cin>>c;
  if(c>='A' && c<='Z'){
    c=tolower(c);
    cout<<c<<"\n";
  }else{
    cout<<"Entered character in not capital";
  }
}