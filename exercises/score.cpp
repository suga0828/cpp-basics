#include <iostream>

using namespace std;

int main()
{
  float score1, score2, score3, Def = 0;

  cout << "Digite tres notas: ";
  cin >> score1;
  cin >> score2;
  cin >> score3;

  Def = (score1 * 0.3) + (score2 * 0.3) + (score3 * 0.4);

  cout << "La nota final es: " << Def << endl;

  system("pause");

  return 0;
}