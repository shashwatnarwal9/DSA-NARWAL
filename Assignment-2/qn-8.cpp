#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];
  cout << "Enter " << n << " elements:\n";
  for(int i = 0; i < n; i++) {
      cin >> arr[i];
  }

  set<int> s; 
  for(int i = 0; i < n; i++) {
      s.insert(arr[i]);
  }

  cout << "Total number of distinct elements: " << s.size() << endl;
  return 0;
}
