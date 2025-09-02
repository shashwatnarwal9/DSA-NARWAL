#include <iostream>
using namespace std;

int main(){
  int rows[]={0,0,1,1};
  int colm[]={0,2,0,4};
  int val[]={1,2,3,5};
  int size = sizeof(val)/sizeof(val[0]);
  int compactMatrix[size+1][3];
  compactMatrix[0][0]=4;
  compactMatrix[0][1]=4;
  compactMatrix[0][2]=size;
  int k=1;
  for(int i=0;i<size;i++){
    compactMatrix[k][0]=rows[k-1];
    compactMatrix[k][1]=colm[k-1];
    compactMatrix[k][2]=val[k-1];
    k++;
  }
  cout<<"Sparse Matrix\n";
  for(int i=0;i<size+1;i++){
    for(int j=0;j<3;j++){
      cout<<compactMatrix[i][j]<<" ";

    }
    cout<<endl;
  }
  cout<<"Transpose of this matrix(row major)\n";
  int transpose[size+1][3];
  transpose[0][1]=compactMatrix[0][0];
  transpose[0][0]=compactMatrix[0][1];
  transpose[0][2]=compactMatrix[0][2];
  k=1;
  for(int i=0;i<size+1;i++){
    transpose[k][1]=compactMatrix[k][0];
    transpose[k][0]=compactMatrix[k][1];
    transpose[k][2]=compactMatrix[k][2];
    k++;
  }

  for(int i=1;i<size+1;i++){
    for(int j=i+1;j<size;j++){
      if(transpose[i][0]>transpose[j][0]||(transpose[i][0]==transpose[j][0]&&transpose[i][1]>transpose[j][1])){
        for(k=0;k<3;k++){
          int temp=transpose[i][k];
          transpose[i][k]=transpose[j][k];
          transpose[j][k]=temp;
        }
      }
    }
  }
  for(int i=0;i<size+1;i++){
    for(int j=0;j<3;j++){
      cout<<transpose[i][j]<<" ";

    }
    cout<<endl;
  }


  return 0;
}