#include <iostream>
using namespace std;

int main() {
  int decimal = 0, octal, remainder, product = 1;
  cout<<"enter the octal number:";
  cin >> octal;
  while (octal != 0) {
    remainder = octal % 10;
    octal = octal / 10;
    decimal = decimal + (remainder*product);
    product *= 8;
    }
  cout << "The number in the decimal form is: " << decimal;
  return 0;
}

