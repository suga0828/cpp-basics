#include <iostream>

using namespace std;

int cubic(int a);

int main()
{
  int n;

  cout << "Ingrese un números: ";
  cin >> n;

  cout << "El cubo del número es: " << cubic(n) << endl;

  return 0;
}

int cubic(int a)
{
  return a * a * a;
}
