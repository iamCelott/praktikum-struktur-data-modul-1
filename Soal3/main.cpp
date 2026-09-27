#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "input: ";
  cin >> n;

  for (int i = n + 1; i > 0; i--) {
    for (int z = n + 1; z > i; z--) {
      cout << " "
           << " ";
    }
    for (int j = i - 1; j > 0; j--) {
      cout << j << " ";
    }
    cout << "*"
         << " ";
    for (int k = 1; k <= i - 1; k++) {
      cout << k << " ";
    }
    cout << endl;
  }

  return 0;
}