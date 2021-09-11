#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float x, y, f = 0;

  cout << "Alexander Sandoval" << endl;

  cout << "Ingrese x: ";
  cin >> x;
  cout << "Ingrese y: ";
  cin >> y;

  f = sqrt(x) / (pow(y, 2) - 1);

  cout << "El resultado de f(" << x << ", " << y << ") es " << f << endl;

  return 0;
}