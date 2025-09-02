#include <iostream>
#include <vector>
using namespace std;

class Stack{
public:
  vector<int> arr;
  int top=-1,max=5;

  void push(int arg){
    if(top==max-1){
      cout<<"\nstack is full, Cant perform this action.";
    }else{
      top++;
      arr.push_back(arg);
    }
    
  }
  int pop(){
    if(top==-1){
      cout<<"\nstack is empty, Cant perform this action.";
      return -1;
    }else{
      int v = arr[top];
      top--;
      return v;
    }
  }
  bool isEmpty(){
    if(top==-1){
      return true;
    }else{
      return false;
    }
  }
  bool isFull(){
    if(top==max-1){
      return true;
    }else{
      return false;
    }
  }
  void display(){
    for (int i = 0; i <= top; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;

  }
  void peek(){
    if(top==-1){
      cout<<"\nstack is empty, Cant perform this action.";
    }else{
      cout<<"peek value is: "<<arr[top]<<endl;
    }
  }


};




int main(){
  Stack s1;
  int x =0;
  while(x!=1){
    int exp;
    cout<<"MENU\n"
      <<"1- to push\n"
      <<"2- to pop\n"
      <<"3- to check if stack is empty\n"
      <<"4- to check if stack is full\n"
      <<"5- to display all elements\n"
      <<"6- to check peek value\n"
      <<"7- Exit\n";
    cin>>exp;
    switch (exp)
    {
      case 1:{
        int p;
        cout<<"Enter element to push\n";
        cin>>p;
        s1.push(p);
        break;
      }
        
      case 2:{
        int t = s1.pop();
        cout<<t;
        break;
      }
        
      case 3:{
        if(s1.isEmpty()){
          cout<<"it is empty\n";
        }else{
          cout<<"it is not empty\n";
        }
        break;
      }
        
      case 4:{
        if(s1.isFull()){
          cout<<"it is full\n";
        }else{
          cout<<"it is not full\n";
        }
        break;
      }
        
      case 5:{
        s1.display();
        break;
      }
        
      case 6:{
        s1.peek();
        break;
      }
        
      case 7:{
        cout<<"Exiting the program\n";
        return 0;
      }
        
      default:{
        cout<<"Enter valid value\n";
        break;
      }
        
    }
  }
  
  return 0;
}