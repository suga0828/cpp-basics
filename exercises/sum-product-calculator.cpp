#include <iostream>
#include <math.h>

using namespace std;

void printMenu();

long sumNumber(int);
long productNumber(int);

int option = 1, number;

int main()
{

  while (option > 0 && option < 3) // Sentencia while para opciones entre 1 y 2
  {
    printMenu();

    switch (option) // Switch para opciones
    {
    case 1: // Opción 1: Suma
      cout << "Ingrese el numero N hasta donde sumar: ";
      cin >> number;
      cout << "La suma desde 1 hasta " << number << " es: " << sumNumber(number) << endl
           << endl;
      break;
    case 2: // Opción 2: Producto
      cout << "Ingrese el numero N hasta donde multiplicar: ";
      cin >> number;
      cout << "La multiplicación de 1 hasta " << number << " es: " << productNumber(number) << endl
           << endl;
      break;
    }
  }

  return 0;
}

void printMenu()
{
  cout << "1. Suma de 1 hasta N" << endl;
  cout << "2. Producto de 1 hasta N" << endl;
  cout << "3. Salir" << endl;

  cout << "Ingrese la opción que quiere realizar: ";

  cin >> option;
}

long sumNumber(int number)
{
  long sum = 0;

  for (int i = 1; i <= number; i++) // Ciclo for para calcular suma
  {
    sum += i; /* Operación sobre suma de variable i, equivalente a sum = sum + i */
  }

  return sum;
}

long productNumber(int number)
{
  long product = 1;

  for (int i = 1; i <= number; i++)
  {
    product *= i; /* Operación sobre producto de variable i, equivalente a product = product * i */
  }

  return product;
}