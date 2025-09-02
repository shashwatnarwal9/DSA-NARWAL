#include <iostream>
using namespace std;

const int MAX = 100;

void multiplySparse(int A[][3], int B[][3], int C[][3]) {
  if (A[0][1] != B[0][0]) {
    cout << "Incompatible matrices\n";
    return;
  }

  int rowsA = A[0][0], colsA = A[0][1], nA = A[0][2];
  int rowsB = B[0][0], colsB = B[0][1], nB = B[0][2];

  C[0][0] = rowsA;
  C[0][1] = colsB;
  int k = 1;


  for (int i = 1; i <= nA; i++) {
    for (int j = 1; j <= nB; j++) {
      if (A[i][1] == B[j][0]) { 
        int row = A[i][0];
        int col = B[j][1];
        int val = A[i][2] * B[j][2];

        
        int found = 0;
        for (int x = 1; x < k; x++) {
          if (C[x][0] == row && C[x][1] == col) {
            C[x][2] += val;
            found = 1;
            break;
          }
        }
        if (!found) {
          C[k][0] = row;
          C[k][1] = col;
          C[k][2] = val;
          k++;
        }
      }
    }
  }

  C[0][2] = k - 1;
}


void printSparse(int M[][3]) {
  for (int i = 0; i <= M[0][2]; i++) {
    cout << M[i][0] << " " << M[i][1] << " " << M[i][2] << endl;
  }
}

int main() {
    
  int A[MAX][3] = {
      {2, 3, 3},  
      {0, 0, 1},
      {0, 2, 2},
      {1, 1, 3}
  };

  int B[MAX][3] = {
      {3, 2, 3},  
      {0, 0, 4},
      {1, 1, 5},
      {2, 0, 6}
  };

  int C[MAX][3]; 

  multiplySparse(A, B, C);

  cout << "Matrix A (sparse):\n";
  printSparse(A);
  cout << "\nMatrix B (sparse):\n";
  printSparse(B);
  cout << "\nMatrix C = A x B (sparse):\n";
  printSparse(C);

  return 0;
}
