#include <iostream>
#include <string>
 using namespace std;


int main() {
  int a, r, n;
  cout << "Digite o primeiro termo da P.A: ";
  cin >> a;
  cout << "Digite a razão da P.A: ";
  cin >> r;
  cout << "Digite o número de termos da P.A: ";
  cin >> n;
  int geral = a + (n - 1) * r;
  int soma_PA = n  * (a + geral) / 2;
  cout << "A soma dos " << n <<" termos da P.A é: "<<soma_PA << endl;
  return 0;
}