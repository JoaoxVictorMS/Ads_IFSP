#include <iostream>
using namespace std;

int main() {
  int n, *fibonacci;
  int s, b = 1, a = 0;
  cout << "Insira um número inteiro positivo: ";
  cin >> n;
  fibonacci = new int[n];
  cout << "A sequêcnia de fibonacci do número digitado é: 0 1";
  for (int i = 0; i < n; i++ ){
    s = a + b;
    a = b;
    b = s;
    fibonacci[i] = s;
    cout << " " << fibonacci[i];
  }
  delete []fibonacci;
  
}