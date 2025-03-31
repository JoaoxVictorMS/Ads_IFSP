#include <iostream>

using namespace std;

int aGlobal = 10;

void MudaValor() { aGlobal = 20; }

int main() {
  MudaValor();
  aGlobal = 30;
  cout << "Novo valor da variável global: " << aGlobal << endl;
  return 0;
}