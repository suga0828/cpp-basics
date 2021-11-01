#include <iostream>

using namespace std;

int main()
{
  int rows = 2, columns = 2;
  int matrix[rows][columns] = {{1, 2}, {3, 4}};

  int matrix2[rows][columns];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      matrix2[i][j] = matrix[i][j];
    }
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << matrix2[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}