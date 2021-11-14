#include <iostream>

// Algorithm: Primality test

using namespace std;

bool isPrime(int n);

int main()
{
  int a;

  cout << "Ingrese un número entero positivo: ";
  cin >> a;

  if (isPrime(a))
  {
    cout << "El número " << a << " es primo" << endl;
  }
  else
  {
    cout << "El número " << a << " no es primo." << endl;
  }

  return 0;
}

bool isPrime(int n)
{
  if (n <= 1)
  {
    return false;
  }

  if (n == 2 || n == 3)
    return true;

  if (n % 2 == 0 || n % 3 == 0)
    return false;

  int i = 5;
  while (i * i <= n)
  {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
    i += 6;
  }

  return true;
}