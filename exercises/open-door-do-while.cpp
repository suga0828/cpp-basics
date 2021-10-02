#include <iostream>

using namespace std;

int main()
{
  int password, i = 0;

  cout << "Código: 1701727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones" << endl;

  do
  {
    cout << "Ingrese la combinación: ";
    cin >> password;

    if (password == 10)
    {
      cout << "Abrir puerta" << endl;
      break;
    }

    i++;
  } while (i < 3);

  return 0;
}