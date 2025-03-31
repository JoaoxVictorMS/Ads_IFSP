#include <iostream>
#include <string>
 using namespace std;


int main() {
  float x, y, z;
  cout << "Digite o primeiro número: ";
  cin >> x;
  cout << "Digite o segundo número: ";
  cin >> y;
  cout << "Digite o terceiro número: ";
  cin >> z;
  float media = (x + y + z) / 3;
  cout << "A média dos números é: " <<  media << endl;
  return 0;
}