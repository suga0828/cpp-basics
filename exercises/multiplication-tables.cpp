#include <iostream>

using namespace std;

int main()
{
  int range = 12, limit = 5;

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