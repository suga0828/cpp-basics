#include <iostream>

using namespace std;

int main()
{
  int limite = 10;
  cout << "limite: ";
  cin >> limite;
  for (int i = 0; i < limite; i++)
  {
    if (i == 50)
    {
      cout << "Se rompe el ciclo" << endl;
      break;
    }
    cout << "i = " << i << endl;
  }
}