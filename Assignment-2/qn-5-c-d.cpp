#include <iostream>
using namespace std;

int main(){
  int n=4,size = n*(n+1)/2,k=0;
  int a[size];
  cout<<"Enter the elements in triangular matrix\n";
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
  cout<<"Lower triangular matrix\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i>=j){
        cout<<a[k]<<" ";
        k++;
      } else{
        cout<<"0 ";
      }
    }
    cout<<"\n";
  }

  k=0;
  cout<<"now upper triangular matrix\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i<=j){
        cout<<a[k]<<" ";
        k++;
      } else{
        cout<<"0 ";
      }
    }
    cout<<"\n";
  }
  return 0;
}