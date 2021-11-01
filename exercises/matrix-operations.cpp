#include <iostream>

using namespace std;

int main()
{
  int rows = 3, columns = 5;
  int matrix1[rows][columns] = {{1, 2, 3, 4, 5},
                                {6, 7, 8, 9, 10},
                                {11, 12, 13, 14, 15}};

  int matrix2[rows][columns] = {{15, 14, 13, 12, 11},
                                {10, 9, 8, 7, 6},
                                {5, 4, 3, 2, 1}};

  int additionMatrix[rows][columns];
  int subtractionMatrix[rows][columns];
  int productMatrix[rows][columns];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      additionMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
      subtractionMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
      productMatrix[i][j] = matrix1[i][j] * matrix2[i][j];
    }
  }

  cout << "Matriz de sumas: " << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << additionMatrix[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  cout << "Matriz de restas: " << endl;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << subtractionMatrix[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  cout << "Matriz de productos: " << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << productMatrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}