#include <iostream>

using namespace std;

int main()
{
  int ages[] = {17, 19, 27, 21, 20};

  int greaterAccumulator = 0, lesserAccumulator = 0;

  for (int i = 0; i < 5; i++)
  {
    if (ages[i] >= 18)
    {
      greaterAccumulator++;
    }
    else
    {
      lesserAccumulator++;
    }
  }

  cout << "Hay " << greaterAccumulator << " alumnos mayores de edad (mayores de 18 años)." << endl;
  cout << "Y hay " << lesserAccumulator << " alumnos menores de edad." << endl;

  return 0;
}