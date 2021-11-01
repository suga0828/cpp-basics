#include <iostream>

using namespace std;

int main()
{
  int numbers = 10;
  int array[numbers];

  for (int i = 0; i < numbers; i++)
  {
    cout << "Ingrese el número " << i + 1 << ": ";
    cin >> array[i];
  }

  cout << "Los números ingresados son:  ";
  for (int i = 0; i < numbers; i++)
  {
    cout << array[i] << " ";
  }

  return 0;
}