#include <iostream>

using namespace std;

int main()
{
  int students = 5, subjects = 3;
  float record;

  int records[students][subjects];

  for (int i = 0; i < students; i++)
  {
    cout << "Estudiante No. " << i + 1 << ": " << endl;
    for (int j = 0; j < subjects; j++)
    {
      cout << "     Ingrese la nota No." << j + 1 << ": ";
      cin >> record;

      if (record >= 0 && record <= 5.0)
      {
        records[i][j] = record;
      }
      else
      {
        cout << "Nota invalida. Ingrese una nota entre 0 y 5." << endl;
        j--;
      }
    }
  }

  cout << endl
       << endl
       << "Notas de los estudiantes:       " << endl
       << endl;

  for (int i = 0; i < students; i++)
  {
    cout << "Estudiante No. " << i + 1 << ":   ";
    for (int j = 0; j < subjects; j++)
    {
      cout << records[i][j] << "  ";
    }
    cout << endl;
  }

  return 0;
}