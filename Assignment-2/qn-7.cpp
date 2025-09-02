#include <iostream>
using namespace std;

int main(){
  int a[]={1,2,3,4,5,6,7,5,6,9};
  int n=sizeof(a)/sizeof(a[0]);
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]>a[j]){
        count++;
      }
    }
  }
  cout<<count;
  return 0;
}