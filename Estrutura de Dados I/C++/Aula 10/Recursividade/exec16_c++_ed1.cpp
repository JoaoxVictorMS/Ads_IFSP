#include <iostream>

using namespace std;

int pot(int base, int expo){
  if (expo == 0){
    return 1;
  } else {
    return base * pot(base, expo - 1);
  }
};

int main() {
  int base, expo;
  cout << "Insira a base: ";
  cin >> base;
  cout << "Insira o expoente: ";
  cin >> expo;
  pot(base, expo);
  cout << "A potência de " << base << " elevado a " << expo << " é: " << pot(base, expo);
  
}