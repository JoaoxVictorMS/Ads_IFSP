#include <iostream>

using namespace std;


int Fatorial (int n){
  int fat = 1;
  for(; n > 1; n = n - 1)
  {
    fat = fat * n;
  }
  return fat;
}

int main() {
  int n;
  cout <<  "Insira um valor para calcular o seu fatorial: ";
  cin >> n;
  int result = Fatorial(n);
  cout <<  "\nO Fatorial desse número é: " << result << endl;
  return 0;
}