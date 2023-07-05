#include "iostream"
using namespace std;

// penjumlahan
int add(int a, int b) {
  if (a <= 0 && b <= 0)
    return 0;
  if (a <= 0)
    return 1 + add(a,b-1);
  if (b <= 0)
    return 1 + add(a-1, b);
  return 2 + add(a-1, b-1);
}

// pengurangan
int sub(int a, int b) {
  return b <= 0 ? a : sub(a-1,b-1);
}

// perkalian
int mul(int a, int b) {
  if (b <= 1)
    return a;
  return mul(a, b-1) + a;
}

// pembagian
float divide(float a, float b) {
  if (a <= 1)
    return 1/b;
  return divide(a-1, b) + (1/b);
}

int main() {
  cout << "Fungsi Penjumlahan\n";
  cout << "3 + 5 = " << add(3,5) << endl;
  cout << "5 + 8 = " << add(5,8) << endl;
  cout << "8 + 11 = " << add(8,11) << endl;
  cout << "Pengurangan\n";
  cout << "5 - 7 = " << sub(5,7) << endl;
  cout << "7 - 11 = " << sub(7,11) << endl;
  cout << "11 - 9 = " << sub(11,9) << endl;
  cout << "Perkalian\n";
  cout << "3 * 5 = " << mul(3,5) << endl;
  cout << "5 * 8 = " << mul(5,8) << endl;
  cout << "8 * 11 = " << mul(8,11) << endl;
  cout << "Pembagian\n";
  cout << "10 / 2 = " << divide(10,2) << endl;
  cout << "25 / 5 = " << divide(25,5) << endl;
  cout << "100 / 4 = " << divide(100,4) << endl;
}
