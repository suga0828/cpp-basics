#include <iostream>
#include <string>
#include <cmath>
#include <array>

using namespace std;

int main()
{
  string texto = "10";
  cout << stoi(texto) << endl;

  int numero = 0;
  cout << "Ingrese un numero: " << endl;
  cin >> numero;
  cout << "El coseno del numero ingresado es: " << cos(numero) << endl;

  array<int, 10> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "El promedio de los numeros es: " << (numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4] + numeros[5] + numeros[6] + numeros[7] + numeros[8] + numeros[9]) / 10 << endl;
}
