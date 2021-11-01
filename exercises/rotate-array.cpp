#include <iostream>

using namespace std;

int main()
{
  int elements = 7;
  int array[elements] = {7, 34, 23, 4, 5, 6, 8};
  int rotatedArray[elements];

  int k;

  cout << "Ingrese el número de rotaciones: ";
  cin >> k;

  for (int i = 0; i < elements; i++)
  {
    rotatedArray[(i + k) % elements] = array[i];
  }

  cout << "Arreglo original: ";
  for (int i = 0; i < elements; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;

  cout << "Arreglo rotado: ";
  for (int i = 0; i < elements; i++)
  {
    cout << rotatedArray[i] << " ";
  }
  cout << endl;

  return 0;
}