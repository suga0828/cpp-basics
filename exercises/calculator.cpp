#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float number1, number2 = 0;
  int operation = 0;

  cout << "Código: 1707727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones" << endl;

  cout << "Ingrese el primer número: ";
  cin >> number1;

  cout << "Ingrese el segundo número: ";
  cin >> number2;

  cout << "Ingrese la operación:"
          "\n1 = Suma"
          "\n2 = Resta"
          "\n3 = Multiplicación"
          "\n4 = División"
          "\n5 = Potenciación"
          "\n6 = Radicación"
          "\n\nOperación: ";
  cin >> operation;

  switch (operation)
  {
  case 1: // Caso 1 (suma)
    cout << "El resultado de sumar: " << number1 << " con " << number2 << " es " << number1 + number2 << endl;
    break;
  case 2: // Caso 2 (resta)
    cout << "El resultado de restar: " << number1 << " con " << number2 << " es " << number1 - number2 << endl;
    break;
  case 3: // Caso 3 (multiplicación)
    cout << "El resultado de multiplicar: " << number1 << " con " << number2 << " es " << number1 * number2 << endl;
    break;
  case 4: // Caso 4 (división)
    cout << "El resultado de dividir: " << number1 << " con " << number2 << " es " << number1 / number2 << endl;
    break;
  case 5:                                                                                                            // Caso 5 (exponente)
    cout << "El resultado de elevar: " << number1 << " a la " << number2 << " es " << pow(number1, number2) << endl; // uso de la función potenciación: pow(base, exponente)
    break;
  case 6:                                                                                                                       // Caso 6 (radicación)
    cout << "El resultado de extraer la raiz: " << number1 << " de " << number2 << " es " << pow(number2, 1 / number1) << endl; // uso de la función potenciación como radicación (exponente inverso): pow(base, 1/exponente)
    break;
  default:
    cout << "Operación no válida" << endl;
    break;
  } // Fin de la sentencia switch

  return 0;
}