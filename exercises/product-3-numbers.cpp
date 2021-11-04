#include <iostream>

using namespace std;

float product(float a, float b, float c);

int main()
{
  float n1, n2, n3;

  cout << "Ingrese tres números: ";
  cin >> n1 >> n2 >> n3;

  cout << "El producto de los tres números es: " << product(n1, n2, n3) << endl;

  return 0;
}

float product(float a, float b, float c)
{
  return a * b * c;
}
