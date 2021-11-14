#include <iostream>

using namespace std;

void changeDigit(int number);

int main()
{
  int a;

  cout << "Ingrese un número entre 10 y 99 (múltiplos de 11 no permitidos): ";
  cin >> a;

  if (a > 10 && a < 99 && a % 11 != 0)
  {
    changeDigit(a);
  }
  else
  {
    cout << "Número inválido." << endl;
  }

  return 0;
}

void changeDigit(int a)
{
  int z, y;
  z = a % 10;
  y = (a - z) / 10;

  cout << "El número " << a << " invertido es: " << z * 10 + y << endl;
}