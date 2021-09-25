#include <iostream>

using namespace std;

int main()
{
  cout << "Código: 1707727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones" << endl;

  /****** Comienzo de código ejercicio ******/
  /*  GENERAR NUMERO IMPARES DE 1 A 20,
  Se define la variable usada de contador k ANTES del for y
  se inializa dentro del for OR DENTRO DEL FOR
  */
  cout << "\Generar números impares" << endl;
  int k;
  for (k = 1; k <= 5; k += 2)
    cout << "\t" << k;
  cout << endl;
  /*  GENERA NUMERO IMPARES DE 1 A 20,
  La declaración de la variable usada de contador k,
  se puede hacer en la misma instrucción for así:
  */
  for (int k = 1; k <= 5; k += 2)
    cout << "\t" << k;
  cout << endl;
  /****** Fin de código ejercicio ******/

  return 0;
}