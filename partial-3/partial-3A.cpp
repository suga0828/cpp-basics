#include <iostream> /* Directiva de preprocesador para interactuar por consola */

using namespace std; // Espacio de nombre librería estándar C++

int main() // Función principal con tipo de retorno int
{
  int b[10] = {}; // Declaración de arreglo de 10 posiciones

  for (int i = 0; i < 10; i++) // Ciclo for desde i = 0 hasta i = 9 (10 no incluído)
  {
    b[i] = 1; // Asignación de 1 a la posición i del arreglo
  }

  return 0; // Retorno de función main
} // Fin de bloque de función main
