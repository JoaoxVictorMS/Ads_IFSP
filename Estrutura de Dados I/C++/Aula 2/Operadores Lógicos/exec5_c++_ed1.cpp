#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y, z;
    cout << "Digite o primeiro número: ";
    cin >> x;
    cout << "\nDigite o segundo número: ";
    cin >> y;
    cout << "\nDigite o terceiro número: ";
    cin >> z;
  if ((z >= x) && (z <= y))
   cout << "\nO número está dentro do intervalo" << endl;
  else
    cout << "\nO número está fora do intervalo" << endl;
}