#include <iostream>

using namespace std;

int main()
{
  int numbers = 15, n;
  int array[numbers];

  cout << "Ingrese un número: ";
  cin >> n;

  for (int i = 0; i < numbers; i++)
  {
    array[i] = n + i + 1;
  }

  cout << "La matriz generada con los números consecutivos de " << n << " es:  ";
  for (int i = 0; i < numbers; i++)
  {
    cout << array[i] << " ";
  }

  return 0;
}