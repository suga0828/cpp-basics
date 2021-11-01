#include <iostream>

using namespace std;

int main()
{
  int n = 3;
  int matrix[n][n];
  int transposedMatrix[n][n];

  cout << "Ingrese los elementos de la matriz: " << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "matriz[" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
      transposedMatrix[j][i] = matrix[i][j];
    }
  }

  cout << endl
       << "Matriz:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl
       << "Matriz traspuesta:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << transposedMatrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}