#include <iostream>

using namespace std;

void getValues();
void power();

int base, expotente;

int main()
{
  getValues();
  power();

  return 0;
}

void getValues()
{
  cout << "Ingrese el valor de la base: ";
  cin >> base;

  cout << "Ingrese el valor del exponente: ";
  cin >> expotente;
}

void power()
{
  long result = 1;

  for (int i = 1; i <= expotente; i++)
  {
    result *= base;
  }

  cout << base << "^" << expotente << " = " << result << endl;
}