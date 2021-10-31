#include <iostream>  // Directiva de preprocesador para interactuar por consola
using namespace std; // Espacio de nombre librería estándar C++

int main()            // Función principal con tipo de retorno int
{                     // Inicio de bloque de código de función principal
  int acumulador = 1; // Definir variable entera

  for (int i = 1; i <= 11; i++)      // Ciclo for comenzando en 1 y terminando en 11, aumentando en una unidad por cada iteración
  {                                  // Inicio del ciclo for
    cout << "Número: " << i << endl; // Mostrar número en consola
    if (i % 2 == 0)                  // Sentencia if con condicional: resto de dividir i entre 2 es igual 0
    {                                // Inicio del condicional if
      acumulador *= i;               // Asginar a la variable `acumulador` el producto del valor de la variable `acumulador` por el valor de `i`. Es equivalente a usar `acumulardor = acumulador * i`
    }                                // Fin del condicional if
  }                                  // Fin del ciclo for

  cout << "La multiplicación de los números pares generados es : " << acumulador << endl;

  return 0; // Retorno de función principal
} // Fin de bloque de código de función principal
