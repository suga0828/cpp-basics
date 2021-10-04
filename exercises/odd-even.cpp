#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int number = 0;

  cout << "Ingrese un número entero: ";
  cin >> number;

  if (number % 2 == 0)
  {
    cout << "El número " << number << " es par" << endl;
  }
  else
  {
    cout << "El número " << number << " es impar" << endl;
  }

  return 0;
}