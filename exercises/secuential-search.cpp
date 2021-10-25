#include <iostream>

using namespace std;

int main()
{
  int a[5] = {3, 4, 2, 1, 5};

  char flag = 'F';
  int searchedElem = 1;
  int index = 0;

  while (flag == 'F' && index < 5)
  {
    if (a[index] == searchedElem)
    {
      flag = 'T';
    }
    index++;
  }

  if (flag == 'T')
  {
    cout << "El número ha sido encontrado en la posición: " << index - 1 << endl;
  }
  else
  {
    cout << "El número buscado no existe en el arreglo" << endl;
  }

  return 0;
}