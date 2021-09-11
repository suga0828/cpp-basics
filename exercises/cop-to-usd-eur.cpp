#include <iostream>

using namespace std;

int main()
{
  float cop, usd, eur = 0;

  cout << "Alexander Sandoval" << endl;

  cout << "Ingrese la cantidad de pesos que quiere escribir en dólares y euros: ";
  cin >> cop;

  usd = cop / 3800;
  eur = cop / 4500;

  cout << "La cantidad de " << cop << " pesos equivale a " << usd << " dólares y " << eur << " euros." << endl;

  return 0;
}