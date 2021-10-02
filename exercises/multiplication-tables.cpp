#include <iostream>

using namespace std;

int main()
{
  string autor = "Código: 1707727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones";

  int range = 12, limit = 5;

  cout << autor << endl;

  for (int i = 1; i <= limit; i++)
  {
    cout << "Table del " << i << endl;
    for (int j = 0; j <= range; j++)
    {
      cout << "\t\t" << i << " * " << j << " = " << i * j << endl;
    }
  }

  return 0;
}