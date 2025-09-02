#include <iostream>
using namespace std;

int main(){

  int arr[]= {2,5,6,8,10,15,18,20};
  int start = 0,target=19,counter=0;
  int last = sizeof(arr)/sizeof(arr[0])-1;
  while(start<=last){
    int mid = (start+last)/2;
    if(arr[mid]<target){
      start = mid+1;
    }else if(arr[mid]>target){
      last = mid-1;
    }else if(arr[mid]==target){
      counter=1;
    }
  }
  if(counter){
    cout<<"Element Found";
  }else{
    cout<<"Element not Found";
  }

  return 0;
}