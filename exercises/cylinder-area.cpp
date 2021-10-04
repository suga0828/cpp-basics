#include <iostream>
#include <math.h>

using namespace std;

const float PI = 3.14159265;

int main()
{
  float r, h, A = 0;

  cout << "Ingrese el radio del cilindro: ";
  cin >> r;
  cout << "Ingrese la altura del cilindro: ";
  cin >> h;

  A = (2 * PI * r * h) + (2 * PI * pow(r, 2));

  cout << "El area de un cilindro recto de radio: " << r << " y altura: " << h << " es " << A << endl;

  return 0;
}