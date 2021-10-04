#include <iostream>

using namespace std;

int main()
{
  int password;

  for (int i = 0; i < 3; i++)
  {
    cout << "Ingrese la combinación: ";
    cin >> password;

    if (password == 10)
    {
      cout << "Abrir puerta" << endl;
      break;
    }
  }

  return 0;
}