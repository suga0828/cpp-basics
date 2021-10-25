#include <iostream>

using namespace std;

int main()
{
  int multiplication = 1;
  int numbers[5] = {2, 3, 1, 6, 1};

  for (int i = 0; i < 5; i++)
  {
    multiplication *= numbers[i];
  }

  cout << "La suma de los elementos del vector es: " << multiplication << endl;

  return 0;
}