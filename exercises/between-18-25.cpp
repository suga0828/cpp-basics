#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int age = 0;

  cout << "Ingrese una edad edad: ";
  cin >> age;

  if (age > 17 && age < 26) // Operador AND (y) para validar dos condiciones
  {
    cout << "El la edad " << age << ", está dentro del rango de 18 a 25 años." << endl;
  }
  else
  {
    cout << "El la edad " << age << ", no está dentro del rango de 18 a 25 años." << endl;
  }

  return 0;
}