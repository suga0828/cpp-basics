#include <iostream> // Directiva de preprocesador para interactuar por consola

using namespace std; // Espacio de nombre librería estándar C++

int main() // Función principal con tipo de retorno int
{          // Inicio de bloque de código de función principal
  int X, Y, z = 0;

  do
  {
    cout << "\t"
         << X << " * " << Y << " = " << X * Y << endl;
    z++;
  } while (z <= 20);

  return 0; // Retorno de función principal
} // Fin de bloque de código de función principal
