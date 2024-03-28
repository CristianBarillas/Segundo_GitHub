//EL programa ingresa los valores de n y r con la funcion factorial para dar un valor fnal

#include <iostream>

using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n, r;

  cout << "Ingrese n: ";
  cin >> n;

  cout << "Ingrese r: ";
  cin >> r;

  int Cnr = factorial(n + r - 1) / (factorial(r) * factorial(n - 1));

  cout << "C(n+r-1) = " << Cnr << endl;

  return 0;
}
