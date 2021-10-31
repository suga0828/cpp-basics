#include <iostream> // Directiva de preprocesador para interactuar por consola

using namespace std; // Espacio de nombre librería estándar C++

int main()   // Función principal con tipo de retorno int
{            // Inicio de bloque de código de función principal
  int NUM87; // Definir variable entera

  cout << "Ingrese el número 87: "; // Mostrar mensaje en consola
  cin >> NUM87;                     // Asignar variable NUM87 con el valor ingresado por consola

  if (NUM87 != 87) // Sentencia if con condición variable NUM87 diferente a 87
  {
    cout << "El número ingresado no es 87" << endl; // Mostrar mensaje en consola
  }                                                 // Fin sentencia if

  return 0; // Retorno de función principal
} // Fin de bloque de código de función principal
