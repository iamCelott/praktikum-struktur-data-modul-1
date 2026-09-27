#include <iostream>

using namespace std;

int main() {
  string deret[21] = {"satu",           "dua",         "tiga",
                      "empat",          "lima",        "enam",
                      "tujuh",          "delapan",     "sembilan",
                      "sepuluh",        "sebelas",     "dua belas",
                      "tiga belas",     "empat belas", "lima belas",
                      "enam belas",     "tujuh belas", "delapan belas",
                      "sembilan belas", "dua puluh",   "seratus"};
  int x;
  cout << "Masukan angka (1 - 100): ";
  cin >> x;

  if (x <= 20) {
    cout << deret[x - 1] << endl;
  } else if (x < 100 && x > 20) {
    cout << deret[(x / 10) - 1] + " puluh " + deret[x % 10 - 1] << endl;
  } else if (x == 100) {
    cout << deret[20] << endl;
  } else {
    cout << "Maaf angka tidak termasuk dalam deret" << endl;
  }

  return 0;
}