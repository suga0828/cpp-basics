#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float number1, number2, number3 = 0;

  cout << "Ingrese el primer numero: ";
  cin >> number1;

  cout << "Ingrese el segundo número: ";
  cin >> number2;

  cout << "Ingrese el tercer número: ";
  cin >> number3;

  cout << "Entre los números " << number1 << ", " << number2 << " y " << number3 << " el mayor es: ";
  if (number1 > number2 && number1 > number3)
  {
    cout << number1 << endl;
  }
  else
  {
    if (number2 > number1 && number2 > number3)
    {
      cout << number2 << endl;
    }
    else
    {
      cout << number3 << endl;
    }
  }

  return 0;
}