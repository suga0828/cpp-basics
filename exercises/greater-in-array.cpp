#include <iostream>

using namespace std;

int main()
{
  int numbers[100], n, greatest = 0;

  cout << "Digite el número de elementos del arreglo: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << ". Digite un número: ";
    cin >> numbers[i];

    if (numbers[i] > greatest)
    {
      greatest = numbers[i];
    }
  }

  cout << "El mayor elemento del vector es: " << greatest << endl;

  return 0;
}