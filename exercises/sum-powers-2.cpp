#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n, acc = 0;

  cout << "Digite el número de elementos a sumar: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    acc += pow(2, i);
  }

  cout << "La suma total es: " << acc << endl;

  return 0;
}