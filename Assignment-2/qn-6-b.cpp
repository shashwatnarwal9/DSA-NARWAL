#include <iostream>
using namespace std;

int main() {
    int A[][3] = {
        {4, 4, 4},  
        {0, 0, 1},
        {0, 2, 2},
        {1, 0, 3},
        {1, 3, 5}
    };

    int B[][3] = {
        {4, 4, 3},
        {0, 0, 4},
        {1, 0, 6},
        {2, 1, 7}
    };

    if (A[0][0] != B[0][0] || A[0][1] != B[0][1]) {
        cout << "Matrix dimensions do not match. Cannot add." << endl;
        return 0;
    }

    int rows = A[0][0], cols = A[0][1];
    int m = A[0][2], n = B[0][2];

    int result[m+n+1][3];
    result[0][0] = rows;
    result[0][1] = cols;

    int i = 1, j = 1, k = 1;
    while (i <= m && j <= n) {
      if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
        result[k][0] = A[i][0];
        result[k][1] = A[i][1];
        result[k][2] = A[i][2];
        i++; k++;
      } 
      else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1])) {
        result[k][0] = B[j][0];
        result[k][1] = B[j][1];
        result[k][2] = B[j][2];
        j++; k++;
      } 
      else {
        int sum = A[i][2] + B[j][2];
        if (sum != 0) {
            result[k][0] = A[i][0];
            result[k][1] = A[i][1];
            result[k][2] = sum;
            k++;
        }
        i++; j++;
      }
    }
    while (i <= m) {
        result[k][0] = A[i][0];
        result[k][1] = A[i][1];
        result[k][2] = A[i][2];
        i++; k++;
    }
    while (j <= n) {
      result[k][0] = B[j][0];
      result[k][1] = B[j][1];
      result[k][2] = B[j][2];
      j++; k++;
    }

    result[0][2] = k - 1;

    cout << "Result:" << endl;
    for (int x = 0; x < k; x++) {
        for (int y = 0; y < 3; y++) {
            cout << result[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
