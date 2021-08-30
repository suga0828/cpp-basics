#include <iostream>

using namespace std;

int main()
{
  int a = 2;
  a += 1;
  int b = 3;
  bool c = a < b;

  int edades[] = {24, 40, 7};
  cout << c << endl;
  cout << sizeof(edades) / sizeof(edades[0]) << endl;
}