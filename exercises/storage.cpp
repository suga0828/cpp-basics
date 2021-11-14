#include <iostream>

using namespace std;

int storage(long n);

int main()
{
  long emptySpace = 3000000000;
  float emptySpaceInGB = (emptySpace) / 1000000000.0;

  cout << "Con un espacio disponible de " << emptySpaceInGB << "GB se pueden almacenar en promedio " << storage(emptySpace) << " canciones" << endl;

  return 0;
}

int storage(long a)
{
  return a / (4550000);
}