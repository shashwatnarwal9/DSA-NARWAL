#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <char> s;
    string ds = "DataStructure";
    for(int i=0;i<ds.length();i++){
        s.push(ds[i]);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    
    return 0;
}