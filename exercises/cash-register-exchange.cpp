#include <iostream>

using namespace std;

int main()
{
  float pesos, euro, euros = 0, dolar, dolars = 0;
  int iterations = 5;

  for (int i = 0; i < iterations; i++)
  {
    cout << "Por favor ingrese la cantidad de pesos que quiere cambiar: ";
    cin >> pesos;

    euro = pesos / 4400;
    dolar = pesos / 4100;
    euros += euro;
    dolars += dolar;

    cout << "La cantidad de euros que obtuviste es: " << euro << endl;
    cout << "La cantidad de dolares que obtuviste es: " << dolar << endl;
  }

  cout << "La cantidad total de euros fue de: " << euros << ". La cantidad total de dólares fue de: " << dolars << " y el total de clientes atentidos fue " << iterations << endl;

  return 0;
}