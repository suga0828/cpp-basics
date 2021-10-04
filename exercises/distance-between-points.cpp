#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float x1, y1, x2, y2, distance = 0;

  cout << "Ingrese x1: ";
  cin >> x1;
  cout << "Ingrese y1: ";
  cin >> y1;
  cout << "Ingrese x2: ";
  cin >> x2;
  cout << "Ingrese y2: ";
  cin >> y2;

  distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

  cout << "La distancia entre (" << x1 << ", " << y1 << ") y (" << x2 << ", " << y2 << ") es " << distance << endl;

  return 0;
}