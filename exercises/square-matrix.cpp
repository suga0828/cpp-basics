#include <iostream>

using namespace std;

int main()
{
  int n = 10;
  int matrix[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int squareMatrix[n];

  for (int i = 0; i < n; i++)
  {
    squareMatrix[i] = matrix[i] * matrix[i];
  }

  cout << "Arreglo: ";
  for (int i = 0; i < n; i++)
  {
    cout << matrix[i] << " ";
  }

  cout << endl;

  cout << "Arreglo de cuadrados: ";
  for (int i = 0; i < n; i++)
  {
    cout << squareMatrix[i] << " ";
  }

  return 0;
}