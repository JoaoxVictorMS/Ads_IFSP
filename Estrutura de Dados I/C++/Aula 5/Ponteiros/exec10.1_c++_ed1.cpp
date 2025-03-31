#include <iostream>
using namespace std;
int main() {
  int x, y, *ptr1, *ptr2;
  cout << "Digite um número: ";
  cin >> x;
  cout << "Digite outro número: ";
  cin >> y;
  ptr1 = &x;
  ptr2= &y;

  int c = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = c;

  cout << "Valor de x: " << x << endl;
  cout << "Valor de y: " << y;

}