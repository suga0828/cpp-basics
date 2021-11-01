#include <iostream>

using namespace std;

int main()
{
  int rows = 5, columns = 4;
  int seats[rows][columns];

  int booked = 0, free = 0;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      int status;
      cout << "Fila " << i + 1 << " Columna " << j + 1 << ": ";
      cin >> status;

      if (status == 1 || status == 0)
      {
        seats[i][j] = status;
        if (status == 1)
        {
          booked++;
        }
        else
        {
          free++;
        }
      }
      else
      {
        cout << "El estado ingresado no es válido" << endl;
        j--;
      }
    }
  }

  cout << endl
       << endl
       << "El estado de asignación de los asientos en la avioneta es: " << endl;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << "   " << seats[i][j] << "   ";
    }
    cout << endl;
  }

  cout << endl
       << "   Total de asientos ocupados: " << booked << endl;
  cout << "   Total de asientos libres: " << free << endl;

  return 0;
}