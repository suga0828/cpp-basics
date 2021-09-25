#include <iostream>

using namespace std;

int main()
{
  float number, positives = 0, negatives = 0, zeros = 0;
  int iterations = 10;

  cout << "Código: 1707727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones" << endl;

  for (int i = 0; i < iterations; i++)
  {
    cout << "Ingrese un número y presione enter: ";
    cin >> number;

    if (number > 0)
    {
      positives++;
    }
    if (number < 0)
    {
      negatives++;
    }
    if (number == 0)
    {
      zeros++;
    }
  }

  cout << "De los números ingresados, " << positives << " son positivos, " << negatives << " son negativos y " << zeros << " son ceros. Para un total de " << iterations << " números leídos" << endl;

  return 0;
}