#include <iostream>

using namespace std;

int main()
{
  int age, female = 0, count = 0;
  float average, accumulator = 0;
  char sex;

  do
  {
    cout << "Ingrese el sexo del alumno ";
    cin >> sex;

    cout << "Ingrese la edad del alumno ";
    cin >> age;

    if (sex == 'F')
    {
      accumulator += age;
      female++;
    }

    count++;
  } while (count < 4);

  cout << "La cantidad de mujeres es: " << female << endl;

  average = accumulator / female;
  cout << "El promedio de la edad de las mujeres es: " << average << endl;

  return 0;
}