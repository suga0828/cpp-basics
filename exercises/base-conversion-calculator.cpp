#include <iostream>
#include <math.h> /* Directiva de preprocesador de funciones matemáticas */

using namespace std;

void printMenu();

int decimalToBinary(int);
int decimalToOctal(int);
string decimalToHexadecimal(int);
int binaryToDecimal(int);
int octalToDecimal(int);
int hexadecimalToDecimal(string);

int option = 1, number;
string numberString;

int main()
{

  while (option > 0 && option < 7)
  {
    printMenu();

    switch (option)
    {
    case 1:
      cout << "Ingrese el numero en decimal: ";
      cin >> number;
      cout << "El numero " << number << " en binario es: " << decimalToBinary(number) << endl
           << endl;
      break;
    case 2:
      cout << "Ingrese el numero en decimal: ";
      cin >> number;
      cout << "El numero " << number << " en octal es: " << decimalToOctal(number) << endl
           << endl;
      break;
    case 3:
      cout << "Ingrese el numero en decimal: ";
      cin >> number;
      cout << "El numero " << number << " en hexadecimal es: " << decimalToHexadecimal(number) << endl
           << endl;
      break;
    case 4:
      cout << "Ingrese el numero en binario: ";
      cin >> number;
      cout << "El numero " << number << " en decimal es: " << binaryToDecimal(number) << endl
           << endl;
      break;
    case 5:
      cout << "Ingrese el numero en octal: ";
      cin >> number;
      cout << "El numero " << number << " en decimal es: " << octalToDecimal(number) << endl
           << endl;
      break;
    case 6:
      cout << "Ingrese el numero en hexadecimal: ";
      cin >> numberString;
      cout << "El numero " << numberString << " en decimal es: " << hexadecimalToDecimal(numberString) << endl
           << endl;
      break;
    }
  }

  return 0;
}

void printMenu()
{
  cout << "1. Decimal a Binario" << endl;
  cout << "2. Decimal a Octal" << endl;
  cout << "3. Decimal a Hexadecimal" << endl;
  cout << "4. Binario a Decimal" << endl;
  cout << "5. Octal a Decimal" << endl;
  cout << "6. Hexadecimal a Decimal" << endl;
  cout << "7. Salir" << endl;

  cout << "Ingrese la opción que quiere realizar: ";

  cin >> option;
}

int decimalToBinary(int decimal)
{
  int binary = 0;
  int remainder;
  int i = 1;

  while (decimal != 0)
  {
    remainder = decimal % 2;
    decimal /= 2;
    binary += remainder * i;
    i *= 10;
  }

  return binary;
}

int decimalToOctal(int decimal)
{
  int octal = 0;
  int remainder;
  int i = 1;

  while (decimal != 0)
  {
    remainder = decimal % 8;
    decimal /= 8;
    octal += remainder * i;
    i *= 10;
  }

  return octal;
}

string decimalToHexadecimal(int decimal)
{
  if (decimal == 0)
  {
    return "0";
  }

  string hexadecimal = "";
  string hexadecimal_symbols = "0123456789ABCDEF";
  int remainder;

  while (decimal != 0)
  {
    remainder = decimal % 16;
    decimal /= 16;
    hexadecimal = hexadecimal_symbols[remainder] + hexadecimal; /* Agrega símbolo a la izquierda según número */
  }

  return hexadecimal;
}

int binaryToDecimal(int binary)
{
  int decimal = 0;
  int remainder;
  int i = 1;

  while (binary != 0)
  {
    remainder = binary % 10;
    binary /= 10;
    decimal += remainder * i;
    i *= 2;
  }

  return decimal;
}

int octalToDecimal(int octal)
{
  int decimal = 0;
  int remainder;
  int i = 1;

  while (octal != 0)
  {
    remainder = octal % 10;
    octal /= 10;
    decimal += remainder * i;
    i *= 8;
  }

  return decimal;
}

int hexadecimalToDecimal(string hexadecimal)
{
  int decimal = 0;
  int len = hexadecimal.length() - 1; /* Cáculo de longitud de string */

  for (int i = 0; i <= len; i++)
  {
    int val = 0;

    switch (hexadecimal[i])
    {
    case '0':
      val = 0;
      break;
    case '1':
      val = 1;
      break;
    case '2':
      val = 2;
      break;
    case '3':
      val = 3;
      break;
    case '4':
      val = 4;
      break;
    case '5':
      val = 5;
      break;
    case '6':
      val = 6;
      break;
    case '7':
      val = 7;
      break;
    case '8':
      val = 8;
      break;
    case '9':
      val = 9;
      break;
    case 'A':
    case 'a':
      val = 10;
      break;
    case 'B':
    case 'b':
      val = 11;
      break;
    case 'C':
    case 'c':
      val = 12;
      break;
    case 'D':
    case 'd':
      val = 13;
      break;
    case 'E':
    case 'e':
      val = 14;
      break;
    case 'F':
    case 'f':
      val = 15;
      break;
    }

    decimal += val * pow(16, len - i); /* Uso de función potenciación */
  }

  return decimal;
}