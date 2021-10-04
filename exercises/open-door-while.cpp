#include <iostream>

using namespace std;

int main()
{
  int password, i = 0;

  while (i < 3)
  {
    cout << "Ingrese la combinación: ";
    cin >> password;

    if (password == 10)
    {
      cout << "Abrir puerta" << endl;
      break;
    }

    i++;
  }

  return 0;
}