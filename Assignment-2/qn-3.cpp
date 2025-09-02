#include <iostream>
using namespace std;

int usingLinearTime(int a[],int n){
  for(int i=1;i<n+1;i++){
    if(a[i-1]!=i){
      return i;
    }
  }
}

int usingBinarySearch(int a[],int n){
  int start =0;
  int last = n-1;
  while(start<=last){
    int mid = (start+last)/2;
    if(mid>0 && a[mid]!=mid+1 && a[mid-1]==mid){
      return mid+1;
    }if (a[mid] == mid + 1) {
      start = mid + 1;
    }
    else {
        last = mid - 1;
    }
  }
  return n;
}

int main(){
  int a[]={1,2,3,4,6,7,8,9,10};
  int n= sizeof(a)/sizeof(a[0]);
  cout<<"Using Linear Time, the missing no is: "<<usingLinearTime(a,n)<< "\n";
  cout<<"Using Binary Search, the missing no is: "<<usingBinarySearch(a,n);
}