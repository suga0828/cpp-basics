#include <iostream>

using namespace std;

int main()
{
  int number, sum = 0;

  cout << "Alexander Sandoval " << endl;

  cout << "Ingrese un número entre mayor que 10 y menor que 100: ";
  cin >> number;

  if (number < 10 || number > 99)
  {
    cout << "Ingrese un número mayor que 10 y menor que 100" << endl;
  }
  else
  {
    sum = (number / 10) + (number % 10);

    cout << "La suma de los dígitos de " << number << " es " << sum << endl;
  }

  return 0;
}