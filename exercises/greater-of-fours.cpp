#include <iostream>

using namespace std;

int greatest(int a, int b, int c, int d);

int main()
{
  int n1, n2, n3, n4;

  cout << "Ingrese cuatro números: ";
  cin >> n1 >> n2 >> n3 >> n4;

  cout << "El mayor número es: " << greatest(n1, n2, n3, n4) << endl;

  return 0;
}

int greatest(int a, int b, int c, int d)
{
  int max = a;

  if (b > max)
    max = b;

  if (c > max)
    max = c;

  if (d > max)
    max = d;

  return max;
}