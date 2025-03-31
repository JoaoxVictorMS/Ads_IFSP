#include <iostream>

using namespace std;


int Soma (int a, int b){
  return a + b;
}

int main() {
  int a, b;
  cout <<  "Insira o primeiro valor inteiro: ";
  cin >> a;
  cout <<  "\nInsira o segundo valor inteiro: ";
  cin >> b;
  int result = Soma(a, b);
  cout <<  "\nA soma é: " << result << endl;
  return 0;
}