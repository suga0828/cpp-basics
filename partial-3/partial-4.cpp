#include <iostream> /* Directiva de preprocesador para interactuar por consola */

using namespace std; // Espacio de nombre librería estándar C++

int main() // Función principal con tipo de retorno int
{
  const int N = 3;

  int n = 6;
  int arr1[n], arr2[n]; /* Declaración de arreglo con primeros 6 elementos del código */

  int sumArr[n], productArr[n]; /* Declaración de arreglo de suma y producto */

  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el valor de arr1[" << i << "]: ";
    cin >> arr1[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el valor de arr2[" << i << "]: ";
    cin >> arr2[i];
  }

  for (int i = 0; i < n; i++) /* Ciclo for para recorrer arreglo */
  {
    sumArr[i] = arr2[i] + N;           /* Suma de elementos de arreglo */
    productArr[i] = arr1[i] * arr2[i]; /* Producto de elementos de arreglo */
  }

  cout << "Arreglo 1: "; /* Imprimir arreglo 1 */
  for (int i = 0; i < n; i++)
    cout << arr1[i] << " ";
  cout << endl;

  cout << "Arreglo 2: "; /* Imprimir arreglo 2 */
  for (int i = 0; i < n; i++)
    cout << arr2[i] << " ";
  cout << endl;

  cout << "Suma de arreglo 2 más " << N << ": "; /* Imprimir arreglo de suma */
  for (int i = 0; i < n; i++)
    cout << sumArr[i] << " ";
  cout << endl;

  cout << "Producto de los arreglos: "; /* Imprimir arreglo de producto */
  for (int i = 0; i < n; i++)
    cout << productArr[i] << " ";
  cout << endl;

  return 0; // Retorno de función main
} // Fin de bloque de función main
