#include <iostream>

using namespace std;

int main()
{
  int num = 1, sum = 0;

  while (true)
  {
    cout << "Ingrese un número: ";
    cin >> num;

    if (num > 0)
    {
      sum += num;
    }

    if (num == 0 || (num >= 20 && num <= 30))
    {
      cout << "La suma de los números positivos ingresados es: " << sum << endl;
      break;
    }
  }

  return 0;
}