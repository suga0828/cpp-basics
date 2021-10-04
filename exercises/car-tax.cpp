#include <iostream>

using namespace std;

int main()
{
  int type = 0;

  cout << "Ingrese el tipo de vehículo: ";
  cin >> type;

  switch (type)
  {
  case 1:
    cout << "El monto del peaje para: Camperos, Automóviles, Camionetas es de $ 7.700" << endl;
    break;
  case 2:
    cout << "El monto del peaje para: Buses y Microbuses es de $ $ 13.200" << endl;
    break;
  case 3:
    cout << "El monto del peaje para: Camiones es de $ 8.400" << endl;
    break;
  case 4:
    cout << "El monto del peaje para: Camiones de dos ejes es de $ 19.200" << endl;
    break;
  case 5:
    cout << "El monto del peaje para: Camiones de tres y cuatro ejes es de $ 29.100" << endl;
    break;
  case 6:
    cout << "El monto del peaje para: Camiones de cinco o más ejes es de $ 37.700" << endl;
    break;
  default:
    cout << "Tipo de vehículo no válido" << endl;
    break;
  }

  return 0;
}