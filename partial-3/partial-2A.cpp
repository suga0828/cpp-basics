#include <iostream> /* Directiva de preprocesador para interactuar por consola */

using namespace std; // Espacio de nombre librería estándar C++

int suma(int n); // Prototipo de la funcion

int main() // Función principal con tipo de retorno int
{
  int n = 5; // Comienzo de bloque de función main

  cout << "Suma desde 1 hasta " << n << " es: " << suma(n) << endl; // 5 + 4 + 3 + 2 + 1 = 15

  return 0; // Retorno de función main
} // Fin de bloque de función main

int suma(int n)             // Función suma
{                           // Comienzo de bloque de función suma
  if (n == 0)               // Si n es igual a 0
  {                         // Comienzo de bloque if
    return 0;               // Retorno para n = 0
  }                         // Fin de bloque if
  else                      // Si n no es igual a 1
  {                         // Comienzo de bloque else
    return n + suma(n - 1); // Retorno de función suma
  }                         // Fin de bloque else
} // Fin de bloque de función suma
