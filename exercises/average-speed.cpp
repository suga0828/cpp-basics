#include <iostream>

using namespace std;

int main()
{
  double distance, time, averageSpeed = 0;

  cout << "Ingrese la distancia recorrida (en kilómetros): ";
  cin >> distance;
  cout << "Ingrese el tiempo transcurrido (en horas): ";
  cin >> time;

  averageSpeed = distance / time;

  cout << "La velocidad promedio del movimiento fue de: " << averageSpeed << " km/h" << endl;

  return 0;
}