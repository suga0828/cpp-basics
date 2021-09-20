#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int dayOfWeek = 0;

  cout << "Código: 1707727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones" << endl;

  cout << "Ingrese el número del día de la semana: ";
  cin >> dayOfWeek;

  if (dayOfWeek < 1 || dayOfWeek > 7) // Operador lógico OR
  {
    cout << "El número ingresado no corresponde a un día de la semana" << endl;
  }
  else
  {
    if (dayOfWeek == 1)
    {
      cout << "El número 1 corresponde al primer día de la semana, que en español es lunes y en inglés es Monday" << endl;
    }

    if (dayOfWeek == 2)
    {
      cout << "El número 2 corresponde al segundo día de la semana, que en español es martes y en inglés es Tuesday" << endl;
    }

    if (dayOfWeek == 3)
    {
      cout << "El número 3 corresponde al tercer día de la semana, que en español es miércoles y en inglés es Wednesday" << endl;
    }

    if (dayOfWeek == 4)
    {
      cout << "El número 4 corresponde al cuarto día de la semana, que en español es jueves y en inglés es Thursday" << endl;
    }

    if (dayOfWeek == 5)
    {
      cout << "El número 5 corresponde al quinto día de la semana, que en español es viernes y en inglés es Friday" << endl;
    }

    if (dayOfWeek == 6)
    {
      cout << "El número 6 corresponde al sexto día de la semana, que en español es sábado y en inglés es Saturday" << endl;
    }

    if (dayOfWeek == 7)
    {
      cout << "El número 7 corresponde al séptimo día de la semana, que en español es domingo y en inglés es Sunday" << endl;
    }
  }

  return 0;
}