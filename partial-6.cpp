#include <iostream> // Directiva de preprocesador para interactuar por consola

using namespace std; // Espacio de nombre librería estándar C++

int main()       // Función principal con tipo de retorno int
{                // Inicio de bloque de código de función principal
  int color = 0; // Definir variable para guardar valor entero de color

  cout << "Código: 1701727. Alexander Sandoval. Tec. en Electrónica y Comunicaciones" << endl;

  cout << "Ingrese el número del color: ";
  cin >> color; // Asignar a variable color valor ingresado por consola

  switch (color) // Sentencia switch con una expresión de tipo entero (entero de color)
  {              // Inicio sentencia switch
  case 1:        // Caso 1 (rojo)
    cout << "El número 1 corresponde al primer color, que en español es rojo y en inglés es red" << endl;
    break; // Romper la secuencia del switch
  case 2:  // Caso 2 (amarillo)
    cout << "El número 2 corresponde al segundo color, que en español es amarillo y en inglés es yellow" << endl;
    break; // Romper la secuencia del switch
  case 3:  // Caso 3 (verde)
    cout << "El número 3 corresponde al tercer color, que en español es verde y en inglés es green" << endl;
    break; // Romper la secuencia del switch
  default: // Caso por defecto
    cout << "El número ingresado no corresponde a un color" << endl;
    break; // Romper la secuencia del switch
  }        // Fin de la sentencia switch

  return 0; // Retorno de función principal
} // Fin de bloque de código de función principal