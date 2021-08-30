#include <iostream>

using namespace std;

int sumar(int a, int b)
{
  return a + b;
}

int mutiplicar(int a, int b)
{
  return a * b;
}

int main()
{
  cout << "Sumar: " << sumar(2, 3) << endl;
  cout << "Multiplicar: " << mutiplicar(2, 3) << endl;
}
