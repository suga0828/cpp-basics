#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float number1, number2 = 0;

  cout << "Ingrese el primer número: ";
  cin >> number1;

  cout << "Ingrese el segundo número: ";
  cin >> number2;

  cout << "La suma de " << number1 << " con " << number2 << " es " << number1 + number2 << endl;

  if (number2 == 0)
  {
    cout << "No se puede dividir por cero" << endl;
  }
  else
  {
    cout << "El resultado de dividir " << number1 << " entre " << number2 << " es " << number1 / number2 << endl;
  }

  return 0;
}