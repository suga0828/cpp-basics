#include <iostream>

using namespace std;

int main()
{
  float hours, payPerHours, tax, income, netIncome = 0;

  cout << "Alexander Sandoval" << endl;

  cout << "Ingrese el total de horas trabajadas por el empleado: ";
  cin >> hours;
  cout << "Ingrese el valor de las horas trabajadas: ";
  cin >> payPerHours;

  income = hours * payPerHours;
  tax = income * .02;
  netIncome = income - tax;

  cout << "El sueldo total del empleado es (sueldo total - 2%): " << netIncome << endl;

  return 0;
}