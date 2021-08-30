#include <iostream>

using namespace std;

int main()
{
  bool verdadero = true || false;
  bool falso = true && false;
  bool negacion = !true;
  cout << verdadero << endl;
  cout << falso << endl;
  cout << negacion << endl;

  int edad = 0;
  cout << "Ingrese su edad: ";
  cin >> edad;
  if (edad >= 18)
  {
    cout << "Es mayor de edad" << endl;
  }
  else
  {
    cout << "Es menor de edad" << endl;
  }

  int opcion = 0;
  cout << "Ingrese una opcion: ";
  cin >> opcion;
  switch (opcion)
  {
  case 1:
    cout << "Opcion 1" << endl;
    break;
  case 2:
    cout << "Opcion 2" << endl;
    break;
  default:
    cout << "Opcion no valida" << endl;
  }
}