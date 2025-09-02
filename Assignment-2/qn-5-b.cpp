#include <iostream>
using namespace std;

int main(){
  int n = 4,size = 3*n-2,k=0;
  int a[size];
  cout<<"enter the elements\n";
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j || i-j==1 || i-j==-1){
        cout<<a[k]<<" ";
        k++;
      }else{
        cout<<"0 ";
      }
    }
    cout<<"\n";
  }
}