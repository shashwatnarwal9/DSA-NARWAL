#include <iostream>
using namespace std;

void diagonalMatrix(int arr[],int n){
  int k=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j){
        cout<<arr[k]<<" ";
        k++;
      }else{
        cout<<"0 ";
      }
    }
    cout<<endl;
  }
}


int main(){
  int n;
  cout<<"Enter no of diagonal element\n";
  cin>>n;
  int arr[n];
  cout<<"enter diagonal elements\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"The diagonal matrix is:\n";
  diagonalMatrix(arr,n);
  return 0;
}