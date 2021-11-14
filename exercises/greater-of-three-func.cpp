#include <iostream>

using namespace std;

int greaterOfX(int, int, int);
int greaterOfY(int, int, int);
int greaterOfZ(int, int, int);
int greaterOfThree(int, int, int);

int main()
{
  int a, b, c;

  cout << "Digite tres números: ";
  cin >> a >> b >> c;

  cout << "El mayor de los tres números es (usando x como base): " << greaterOfX(a, b, c) << endl;
  cout << "El mayor de los tres números es (usando y como base): " << greaterOfY(a, b, c) << endl;
  cout << "El mayor de los tres números es (usando z como base): " << greaterOfZ(a, b, c) << endl;
  cout << "El mayor de los tres números es (sin base): " << greaterOfThree(a, b, c) << endl;

  return 0;
}

int greaterOfX(int x, int y, int z)
{
  int greater = x;

  if (y > z && y > x)      // y es mayor que z y y mayor que x
    greater = y;           // y es el mayor
  else if (z > y && z > x) // z es mayor que y y mayor que x
    greater = z;           // z es el mayor

  return greater; // retorna el mayor
}

int greaterOfY(int x, int y, int z)
{
  int greater = y;

  if (x > y && x > z)
    greater = x;
  else if (z > x && z > y)
    greater = z;

  return greater;
}

int greaterOfZ(int x, int y, int z)
{
  int greater = z;

  if (x > z && x > y)
    greater = x;
  else if (y > z && y > x)
    greater = y;

  return greater;
}

int greaterOfThree(int x, int y, int z)
{
  int greater;

  if (x > z && x > y)
    greater = x;
  else if (y > z && y > x)
    greater = y;
  else
    greater = z;

  return greater;
}
