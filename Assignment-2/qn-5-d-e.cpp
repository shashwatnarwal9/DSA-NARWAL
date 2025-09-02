#include <iostream>
using namespace std;

int main(){
  int n=3,size = n*(n+1)/2,k=0,m=0;
  int a[size];
  cout<<"Enter the elements of Symmetric matrix\n";
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
  cout<<"Symmetric matrix\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i>=j){
        cout<<a[k]<<" ";
        k++;
      }else{
        int x = j*(j+1)/2+i;
        cout<<a[x]<<" ";
      }
      
    }
    cout<<"\n";
  }
  return 0;
}
