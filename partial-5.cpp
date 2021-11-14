#include <iostream> // Directiva de preprocesador para interactuar por consola

using namespace std; // Espacio de nombre librería estándar C++

int main()              // Función principal con tipo de retorno int
{                       // Inicio de bloque de código de función principal
  int numero, suma = 0; // Definición de variables para numero ingresado y suma

  while (numero != 728) // Ciclo while que se ejecuta mientras valor de variable `numero` es diferente de 728
  {                     // Inicio ciclo while
    cout << "Ingrese un número: ";
    cin >> numero; // Asignar en variable `número` valor ingresado por consola

    if (numero % 2 == 1) // Sentencia if con condicional resto de variable `número` dividida entre 2 es igual 1
    {                    // Inicio condicional if
      suma += numero;    // Asignar a variable `suma` el valor actual más el valor de la variable `número`. Es equivalente a usar `suma = suma + numero`
    }                    // Fin condicional if

  } // Fin ciclo while

  cout << "La suma de los números impares ingresados es: " << suma;

  return 0; // Retorno de función principal
} // Fin de bloque de código de función principal
