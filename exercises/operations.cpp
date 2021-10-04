#include <iostream>
#include <math.h>

using namespace std;

const float PI = 3.14159265;

int main()
{
  cout << "El resultado de 15 dividido 7 es: " << 15.0 / 7.0 << endl;
  cout << "El residuo de 12 dividido 5 es: " << 12 % 5 << endl;
  cout << "El resultado de tres menos la multiplicación de cuatro por seis es: " << 3 - (4 * 6) << endl;
  cout << "El cubo de 11 es: " << pow(11, 3) << endl;
  cout << "La raiz cúbica de 1331 es: " << cbrt(1331) << endl;
  cout << "La raiz cuadrada de 25 es: " << sqrt(25) << endl;
  cout << "El seno de 2pi/6: " << sin(2 * PI / 6) << endl;

  return 0;
}