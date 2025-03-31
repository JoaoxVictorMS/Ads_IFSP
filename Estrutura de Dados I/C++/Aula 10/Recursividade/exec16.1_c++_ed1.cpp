#include <iostream>

using namespace std;

int soma(int a, int b){
  if (a == 0){
    return a;
  } else {
    return soma(++a, --b);
  }
};

int main() {
  int a, b;
  cout << "Insira o primeiro número: ";
  cin >> a;
  cout << "Insira o segundo número: ";
  cin >> b;
  soma(a, b);
  cout << "A soma de " << a << " com " << b << " é: " << soma(a, b);
}