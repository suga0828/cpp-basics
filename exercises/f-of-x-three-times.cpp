#include <iostream>

using namespace std;

int main()
{
  float x, f;

  cout << "Código: 1701727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones" << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << "Ingrese el valor de x: ";
    cin >> x;

    if (x == 7)
    {
      cout << "No se puede dividir por 0." << endl;
      break;
    }

    f = ((3 * x) + 2) / (x - 7);

    cout << "Para f(x) = (3x + 2) / (x - 7)" << endl;
    cout << "El valor de f(" << x << ") es: " << f << endl;
  }

  return 0;
}