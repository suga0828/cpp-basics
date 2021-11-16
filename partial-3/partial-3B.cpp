#include <iostream> /* Directiva de preprocesador para interactuar por consola */

using namespace std; // Espacio de nombre librería estándar C++

int main() // Función principal con tipo de retorno int
{
  float nota[3][2] = {{3.2, 4.6},
                      {2.9, 4.2},
                      {3.9, 3.6}};

  cout << "Nota Fila 1, Column 0 es: " << nota[1][0] << endl;

  return 0; // Retorno de función main
} // Fin de bloque de función main
