#include <iostream>

using namespace std;

int main()
{
  int sum = 0;
  int numbers[5] = {3, 5, 1, 8, 0};

  for (int i = 0; i < 5; i++)
  {
    sum += numbers[i];
  }

  cout << "La suma de los elementos del vector es: " << sum << endl;

  return 0;
}
