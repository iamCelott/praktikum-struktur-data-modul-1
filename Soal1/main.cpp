#include <iostream>

using namespace std;

int main() {
  float x, y;
  cout << "Masukan nilai x: ";
  cin >> x;
  cout << "Masukan nilai y: ";
  cin >> y;

  cout << "Hasil operasi penjumlahan (" << x << " + " << y << "): " << x + y
       << endl;
  cout << "hasil operasi pengurangan (" << x << " - " << y << "): " << x - y
       << endl;
  cout << "hasil operasi perkalian (" << x << " * " << y << "): " << x * y
       << endl;
  cout << "hasil operasi pembagian (" << x << " / " << y << "): " << x / y
       << endl;

  return 0;
}