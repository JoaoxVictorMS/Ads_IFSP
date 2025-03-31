#include <iostream>
using namespace std;
int main() {
  int x, y, *ptr1, *ptr2;
  cout << "Digite um valor: ";
  cin >> x;
  cout << "Digite outro valor: ";
  cin >> y;

  ptr1 = &x;
  ptr2 = &y;

  cout << "A soma é: " << *ptr1+*ptr2 << endl;
  cout << "A subtração é: " << *ptr1-*ptr2 << endl;
  cout << "A multiplicação é: " << (*ptr1) * (*ptr2) << endl;
  cout << "A divisão é: " << (*ptr1)/(*ptr2);
}