#include <iostream>

using namespace std;

int main()
{
  int dayOfWeek = 0;

  cout << "Código: 1707727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones" << endl;

  cout << "Ingrese el número del día de la semana: ";
  cin >> dayOfWeek;

  switch (dayOfWeek) // Sentencia switch con una expresión de tipo entero (día de la semana)
  {
  case 1: // Caso 1 (lunes)
    cout << "El número 1 corresponde al primer día de la semana, que en español es lunes y en inglés es Monday" << endl;
    break; // Romper la secuencia del switch
  case 2:  // Caso 2 (martes)
    cout << "El número 2 corresponde al segundo día de la semana, que en español es martes y en inglés es Tuesday" << endl;
    break; // Romper la secuencia del switch
  case 3:  // Caso 3 (miércoles)
    cout << "El número 3 corresponde al tercer día de la semana, que en español es miércoles y en inglés es Wednesday" << endl;
    break; // Romper la secuencia del switch
  case 4:  // Caso 4 (jueves)
    cout << "El número 4 corresponde al cuarto día de la semana, que en español es jueves y en inglés es Thursday" << endl;
    break; // Romper la secuencia del switch
  case 5:  // Caso 5 (viernes)
    cout << "El número 5 corresponde al quinto día de la semana, que en español es viernes y en inglés es Friday" << endl;
    break; // Romper la secuencia del switch
  case 6:  // Caso 6 (sábado)
    cout << "El número 6 corresponde al sexto día de la semana, que en español es sábado y en inglés es Saturday" << endl;
    break; // Romper la secuencia del switch
  case 7:  // Caso 7 (domingo)
    cout << "El número 7 corresponde al séptimo día de la semana, que en español es domingo y en inglés es Sunday" << endl;
    break; // Romper la secuencia del switch
  default: // Caso por defecto
    cout << "El número ingresado no corresponde a un día de la semana" << endl;
    break; // Romper la secuencia del switch
  }        // Fin de la sentencia switch

  return 0;
}