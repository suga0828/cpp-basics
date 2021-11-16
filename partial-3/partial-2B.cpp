#include <iostream> /* Directiva de preprocesador para interactuar por consola */

using namespace std; // Espacio de nombre librería estándar C++

int suma(int, int); // Prototipo de la funcion

int main()          // Función principal con tipo de retorno int
{                   // Comienzo de bloque de función main
  int x = 5, y = 9; // Declaración de variables locales

  cout << "La suma de " << x << " y " << y << " es: " << suma(x, y) << endl; // 5 + 9 = 14

  return 0; // Retorno de función main
} // Fin de bloque de función main

int suma(int x, int y) // Función suma
{                      // Comienzo de bloque de función suma
  int resultado;       // Declaración de variable local resultado
  resultado = x + y;   // Asignación de operacion suma a variable resultado

  return resultado; // Retorno de función suma
} // Fin de bloque de función suma
