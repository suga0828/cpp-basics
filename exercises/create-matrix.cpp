#include <iostream>

using namespace std;

int main()
{
  int rows, columns;
  cout << "Digite el número de filas: ";
  cin >> rows;

  cout << "Digite el número de columnas: ";
  cin >> columns;

  int matrix[rows][columns];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << "Digite el número [" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << matrix[i][j];
    }

    cout << endl;
  }

  return 0;
}