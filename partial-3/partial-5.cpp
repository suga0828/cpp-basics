#include <iostream> /* Directiva de preprocesador para interactuar por consola */

using namespace std; // Espacio de nombre librería estándar C++

void printAuthor();

void capturarDatos();
void operarYMostrarDatos();

int n1, n2, n3, n4, n5, n6, n7, n8;

int main() // Función principal con tipo de retorno int
{
  printAuthor();

  capturarDatos();
  operarYMostrarDatos();

  return 0; // Retorno de función main
} // Fin de bloque de función main

void printAuthor()
{
  cout << "1701727. Alexander Sandoval. Las Acacias." << endl;
}

void capturarDatos()
{
  cout << "Ingrese el número 1: ";
  cin >> n1;

  cout << "Ingrese el número 2: ";
  cin >> n2;

  cout << "Ingrese el número 3: ";
  cin >> n3;

  cout << "Ingrese el número 4: ";
  cin >> n4;

  cout << "Ingrese el número 5: ";
  cin >> n5;

  cout << "Ingrese el número 6: ";
  cin >> n6;

  cout << "Ingrese el número 7: ";
  cin >> n7;

  cout << "Ingrese el número 8: ";
  cin >> n8;
}

void operarYMostrarDatos()
{
  cout << "El resultado de la suma de " << n1 << " y " << n2 << " es: " << n1 + n2 << endl;
  cout << "El resultado de la suma de " << n3 << " y " << n4 << " es: " << n3 + n4 << endl;
  cout << "El resultado de la suma de " << n5 << " y " << n6 << " es: " << n5 + n6 << endl;
  cout << "El resultado de la suma de " << n7 << " y " << n8 << " es: " << n7 + n8 << endl;
}