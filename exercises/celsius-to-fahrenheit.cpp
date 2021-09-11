#include <iostream>

using namespace std;

int main()
{
  float c, f = 0;

  cout << "Alexander Sandoval" << endl;

  cout << "Ingrese la temperatura en grados Celsius: ";
  cin >> c;

  f = (c * 9 / 5) + 32;

  cout << "Una temperatura de " << c << " grados Celsius equivale a " << f << " grados Fahrenheit" << endl;

  return 0;
}